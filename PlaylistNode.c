#include <stdio.h>
#include <string.h>
#include "PlaylistNode.h"

void SetPlaylistNode(PlaylistNode* thisNode, char idInit[], char songNameInit[], char artistNameInit[], int songLengthInit){
    strcpy(thisNode->uniqueID, idInit); 
    strcpy(thisNode->songName, songNameInit); 
    strcpy(thisNode->artistName, artistNameInit); 
    thisNode->songLength = songLengthInit;

}
void PrintPlaylistNode(PlaylistNode* thisNode){
                    printf("Unique ID: ");
                    printf("%s\n", thisNode->uniqueID);
                    printf("Song Name: ");
                    printf("%s\n", thisNode->songName);
                    printf("Artist Name: ");
                    printf("%s\n", thisNode->artistName);
                    printf("Song Length (in seconds): ");
                    printf("%d\n\n", thisNode->songLength);
}
PlaylistNode* GetNextPlaylistNode(PlaylistNode* thisNode){
    return thisNode->nextNodePtr;


}
