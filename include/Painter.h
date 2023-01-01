#ifndef PAINTER_H
#define PAINTER_H


class Painter
{
    public:
        Painter();
        void MainMenu ();
        void SortingMenu ();
        void SearchingMenu ();
        void AskForArraySize ();
        void AskForArray ();
        void OutputMessage ();
        void AskForTarget ();
        void FoundBinarySearchTarget (int target);
        void NotFoundBinarySearchTarget ();
        void AskForNumberOfNodes ();
        void AskForNodes ();
        void GraphMenu ();
        void AskForTwoNodes();
        void BackToSortMenu ();
        void BackToSearchMenu ();
        void BackToGraphMenu ();
};

#endif // PAINTER_H
