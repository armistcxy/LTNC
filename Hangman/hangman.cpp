#include <iostream>
#include <cstdlib>
#include <ctime>

const int MAX_BAD_GUESSSES = 7;
const std::string WORD_LIST[] = { 
	"angle", "ant", "apple", "arch", "arm", "army",
        "baby", "bag", "ball", "band", "basin", "basket", "bath", "bed", "bee", "bell", "berry",
        "bird", "blade", "board", "boat", "bone", "book", "boot", "bottle", "box", "boy",
        "brain", "brake", "branch", "brick", "bridge", "brush", "bucket", "bulb", "button",
        "cake", "camera", "card",  "cart", "carriage", "cat", "chain", "cheese", "chest",
        "chin", "church", "circle", "clock", "cloud", "coat", "collar", "comb", "cord",
        "cow", "cup", "curtain", "cushion",
        "dog", "door", "drain", "drawer", "dress", "drop", "ear", "egg", "engine", "eye",
        "face", "farm", "feather", "finger", "fish", "flag", "floor", "fly",
        "foot", "fork", "fowl", "frame",
        "garden", "girl", "glove", "goat", "gun",
        "hair", "hammer", "hand", "hat", "head", "heart", "hook", "horn", "horse",
        "hospital", "house",
        "island", "jewel",
        "kettle", "key", "knee", "knife", "knot",
        "leaf", "leg", "library", "line", "lip", "lock",
        "map", "match", "monkey", "moon", "mouth", "muscle",
        "nail", "neck", "needle", "nerve", "net", "nose", "nut",
        "office", "orange", "oven", "parcel", "pen", "pencil", "picture", "pig", "pin",
        "pipe", "plane", "plate", "plow", "pocket", "pot", "potato", "prison", "pump",
        "rail", "rat", "receipt", "ring", "rod", "roof", "root",
        "sail", "school", "scissors", "screw", "seed", "sheep", "shelf", "ship", "shirt",
        "shoe", "skin", "skirt", "snake", "sock", "spade", "sponge", "spoon", "spring",
        "square", "stamp", "star", "station", "stem", "stick", "stocking", "stomach",
        "store", "street", "sun",
        "table", "tail", "thread", "throat", "thumb", "ticket", "toe", "tongue", "tooth",
        "town", "train", "tray", "tree", "trousers",
        "umbrella",
        "wall", "watch", "wheel", "whip", "whistle", "window", "wire", "wing", "worm"};
const int AMOUNT_WORDS = sizeof(WORD_LIST) / sizeof(std::string);
std::string choose_word(){
	int random_number = rand() % AMOUNT_WORDS;
	return WORD_LIST[random_number];
}

void render (std::string guess_word, int bad_guess_count){
	std::cout << guess_word << std::endl << bad_guess_count << std::endl;
}

char read_guess(){
	std::cout << "Nhap chu cai ban doan: ";
	char x;
	std::cin >> x;
	return x;
}

bool check_if_char_exist(std::string word, char x){
	return (word.find(x) != std::string::npos);
}

void update_to_screen(std::string& guess_word, std::string word, char x){
	for (int i = word.length() - 1; i >= 0; i--){
		if (word[i] == x){
			guess_word[i] = x;
		}
	}
}

int main(){

	srand(time(NULL));
	std::string word = choose_word();
	std::string guess_word = std::string(word.length(), '_');
	bool is_success = false;
	int bad_guess_so_far = 0;

	while (bad_guess_so_far < MAX_BAD_GUESSSES && !is_success){
		render(guess_word, bad_guess_so_far);
		char x = read_guess();
		if (check_if_char_exist(guess_word, x)){
			update_to_screen(guess_word, word, x);
		}
		else bad_guess_so_far++;

		if (guess_word == word) is_success = true;
	}

	if (bad_guess_so_far == MAX_BAD_GUESSSES) {
		std::cout << "You lose\n"; 
	}
	if (is_success) std::cout << "You win\n";
	return 0;
}