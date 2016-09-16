/*
 * Author: Colby Bates
 * File: cardcatalog.cpp
 */


#include "cardcatalog.h"

CardCatalog::CardCatalog()
{
  std::ifstream inf("book.txt");
  string tmp_call;
  while(!std::getline(inf, tmp_call, '|').eof())
  {
    Media* mp;
    string tmp_title;
    string tmp_subject;
    string tmp_author;
    string tmp_description;
    string tmp_publisher;
    string tmp_city;
    string tmp_year;
    string tmp_series;
    string tmp_notes;

    getline(inf, tmp_title, '|');
    getline(inf, tmp_subject, '|');
    getline(inf, tmp_author, '|');
    getline(inf, tmp_description, '|');
    getline(inf, tmp_publisher, '|');
    getline(inf, tmp_city, '|');
    getline(inf, tmp_year, '|');
    getline(inf, tmp_series, '|');
    getline(inf, tmp_notes);

    mp = new Book(tmp_call, tmp_title, tmp_subject, tmp_author, tmp_description, tmp_publisher, tmp_city, tmp_year, tmp_series, tmp_notes);
    
    cards.push_back(mp);
  }
  inf.close();
  std::ifstream infv("video.txt");
  while(!std::getline(infv, tmp_call, '|').eof())
  {
    Media* mp;
    string tmp_title;
    string tmp_subject;
    string tmp_description;
    string tmp_distributor;
    string tmp_notes;
    string tmp_series;
    string tmp_label;

    getline(infv, tmp_title, '|');
    getline(infv, tmp_subject, '|');
    getline(infv, tmp_description, '|');
    getline(infv, tmp_distributor, '|');
    getline(infv, tmp_notes, '|');
    getline(infv, tmp_series, '|');
    getline(infv, tmp_label);

    mp = new Video(tmp_call, tmp_title, tmp_subject, tmp_description, tmp_distributor, tmp_notes, tmp_series, tmp_label);
    
    cards.push_back(mp);
  }
  infv.close();
  std::ifstream inff("film.txt");
  while(!std::getline(inff, tmp_call, '|').eof())
  {
    Media* mp;
    string tmp_title;
    string tmp_subject;
    string tmp_director;
    string tmp_notes;
    string tmp_year;

    getline(inff, tmp_title, '|');
    getline(inff, tmp_subject, '|');
    getline(inff, tmp_director, '|');
    getline(inff, tmp_notes, '|');
    getline(inff, tmp_year);

    mp = new Film(tmp_call, tmp_title, tmp_subject, tmp_director, tmp_notes, tmp_year);
    
    cards.push_back(mp);
  }
  inff.close();
  std::ifstream infp("periodic.txt");
  while(!std::getline(infp, tmp_call, '|').eof())
  {
    Media* mp;
    string tmp_title;
    string tmp_subject;
    string tmp_author;
    string tmp_description;
    string tmp_publisher;
    string tmp_publishing_history;
    string tmp_series;
    string tmp_notes;
    string tmp_related_titles;
    string tmp_other_titles;
    string tmp_govt_doc_num;

    getline(infp, tmp_title, '|');
    getline(infp, tmp_subject, '|');
    getline(infp, tmp_author, '|');
    getline(infp, tmp_description, '|');
    getline(infp, tmp_publisher, '|');
    getline(infp, tmp_publishing_history, '|');
    getline(infp, tmp_series, '|');
    getline(infp, tmp_notes, '|');
    getline(infp, tmp_related_titles, '|');
    getline(infp, tmp_other_titles, '|');
    getline(infp, tmp_govt_doc_num);

    mp = new Periodical(tmp_call, tmp_title, tmp_subject, tmp_author, tmp_description, tmp_publisher, tmp_publishing_history, tmp_series, tmp_notes, tmp_related_titles, tmp_other_titles, tmp_govt_doc_num);
    
    cards.push_back(mp);
  }
  infp.close();
}
CardCatalog::~CardCatalog()
{
  for(vector<Media*>::const_iterator it = cards.begin(); it != cards.end(); ++it)
  {
    delete (*it);
  }
}
void CardCatalog::display() const
{
  for(vector<Media*>::const_iterator it = cards.begin(); it != cards.end(); ++it)
  {
    (*it)->display();
  }
}
void CardCatalog::searchTitle(const string& keyword) const
{
  vector<Media*> results;
  for(vector<Media*>::const_iterator it = cards.begin(); it != cards.end(); ++it)
  {
    int contains_keyword = (*it)->checkTitle(keyword);
    if(contains_keyword == 1)
    {
      results.push_back(*(it));
    }
  }
  cout << "****************RESULTS**************\n\n";
  for(vector<Media*>::const_iterator it = results.begin(); it != results.end(); ++it)
  {
    (*it)->display();
  }
}
void CardCatalog::searchCall(const string& keyword) const
{
  vector<Media*> results;
  for(vector<Media*>::const_iterator it = cards.begin(); it != cards.end(); ++it)
  {
    int contains_keyword = (*it)->checkCall(keyword);
    if(contains_keyword == 1)
    {
      results.push_back(*(it));
    }
  }
  cout << "****************RESULTS**************\n\n";
  for(vector<Media*>::const_iterator it = results.begin(); it != results.end(); ++it)
  {
    (*it)->display();
  }
}
void CardCatalog::searchSubject(const string& keyword) const
{
  vector<Media*> results;
  for(vector<Media*>::const_iterator it = cards.begin(); it != cards.end(); ++it)
  {
    int contains_keyword = (*it)->checkSubject(keyword);
    if(contains_keyword == 1)
    {
      results.push_back(*(it));
    }
  }
  cout << "****************RESULTS**************\n\n";
  for(vector<Media*>::const_iterator it = results.begin(); it != results.end(); ++it)
  {
    (*it)->display();
  }
}
void CardCatalog::searchOther(const string& keyword) const
{
  vector<Media*> results;
  for(vector<Media*>::const_iterator it = cards.begin(); it != cards.end(); ++it)
  {
    int contains_keyword = (*it)->checkOther(keyword);
    if(contains_keyword == 1)
    {
      results.push_back(*(it));
    }
  }
  cout << "****************RESULTS**************\n\n";
  for(vector<Media*>::const_iterator it = results.begin(); it != results.end(); ++it)
  {
    (*it)->display();
  }
}

