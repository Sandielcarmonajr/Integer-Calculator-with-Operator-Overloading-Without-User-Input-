//Integer.h

class Integer{
    private:
      int value;
    
    public:
      Integer();
      
      Integer(int val);
      
      int getValue() const;
      
      void setValue(int val);
      
      Integer operator+(const Integer& other) const;
      Integer operator-(const Integer& other) const;
      Integer operator*(const Integer& other) const;
      Integer operator/(const Integer& other) const;
    
};