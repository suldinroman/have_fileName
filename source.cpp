#include <iostream>
#include <vector>
#include <algorithm>

bool have_fileName(std::vector<std::string>, std::string);

int main(){
	std::vector<std::string> fileList = {"image.png",
					     "text.txt",
					     "exec.out"}; //only for C++11, not working for C++98
	std::string fileName1("text.txt");
	std::string fileName2("video.flv");

	std::cout << (have_fileName(fileList, fileName1)?"True":"False") << std::endl;
	std::cout << (have_fileName(fileList, fileName2)?"True":"False") << std::endl;
	return 0;
}

bool have_fileName(std::vector<std::string> fList, std::string fName){
	std::vector<std::string>::iterator iter = std::find(fList.begin(), fList.end(), fName);

	if(iter != fList.end())
		return true;
	else
		return false;
}
