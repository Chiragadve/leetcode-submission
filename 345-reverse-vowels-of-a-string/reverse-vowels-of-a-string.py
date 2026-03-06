class Solution:
    def isvowel(self,c):
        if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' 
        or c == 'A' or c == 'E' or c == 'I' or c == 'O' or c == 'U'):
            return True
        return False

    def reverseVowels(self, s: str) -> str:
        i = 0
        j = len(s) - 1
        char_list = list(s)

        while i < j:
            if not self.isvowel(char_list[i]):
                i+=1
            if not self.isvowel(char_list[j]):
                j-=1
            if self.isvowel(char_list[i]) and self.isvowel(char_list[j]):
                char_list[i], char_list[j] = char_list[j], char_list[i]
                i+=1
                j-=1
        return "".join(char_list)