#include "main.h"

#include <iostream>
#include <fstream>//ファイルストリーム
#include <sstream>//文字列ストリーム
#include <vector>
using namespace std;//標準名前空間の使用

//CSVファイルからキャラデータを読み込む関数.
vector<Character> readCharactersFromCSV(const string& filename) {
	vector<Character> characters;
	ifstream ifs(filename);
	if (ifs.fail()) {
		cerr << "ファイルオープンエラー" << endl;
		return characters;//空のベクターを返す.
	}

	string line;
	// 一行目を読み飛ばす
	if (getline(ifs, line)) {
		// 何もしない、ここで一行目を無視
	}
	while (getline(ifs, line)) {//1行ずつ読み込み
		istringstream iss(line);
		vector<string> v;//1行のデータを格納するバッファ
		string value;
		while (getline(iss, value, ',')) {
			v.push_back(value);
		}
		if (v.size() == 5) {//必要な5つのデータが揃っているか確認
			Character character;
			character.setData(v[0], stoi(v[1]), stoi(v[2]), stoi(v[3]), stof(v[4]));
			characters.push_back(character);
		}
	}
	return characters;
}

int main() {
	//キャラデータをCSVファイルから読み込む
	vector<Character> characters = readCharactersFromCSV("Book1.csv");

	//キャラデータを表示
	cout << "Name\tHp\tMp\tAtk\tAs" << endl;
	for (const auto& character : characters) {
		cout << character.getName() << "\t"
			<< character.getHp() << "\t"
			<< character.getMp() << "\t"
			<< character.getAtk() << "\t"
			<< character.getAtackSpeed() << endl;
	}
	return 0;
}