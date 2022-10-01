// From https://cplusplus.com/forum/beginner/58978/

struct TrainerClass {};

template <class T> struct Community {};

template <typename TTrainer, template <typename> class T> struct Graveyard {
  T<TTrainer> t; // Nested template
};

int main() { Graveyard<TrainerClass, Community> g; }
