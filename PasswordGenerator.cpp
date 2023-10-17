#include <iostream>
	#include <vector>
	#include <random>
	#include <algorithm>
	 
	std::string horrorPasswordGenerator() 
	{
	    std::vector<char> passwordCharaktere = {'O','0','|','1','l','I','5','s'};
	    int passwordLaenge = 25;
	    std::vector<char> passwordArray;
	    
	    for (int i = 1; i <= passwordLaenge; i++)
	    {
	        int index = rand() % passwordCharaktere.size();
	        passwordArray.push_back(passwordCharaktere[index]);
	    }
	    
	    std::string passwordAlbtraum(passwordArray.begin(), passwordArray.end());
	    return passwordAlbtraum;
	}
	 
	int main()
	{
	    std::string password = horrorPasswordGenerator();
	    std::cout << password << std::endl;
	    return 0;
	}
