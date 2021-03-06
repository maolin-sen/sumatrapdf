/* Copyright 2020 the SumatraPDF project authors (see AUTHORS file).
   License: GPLv3 */

bool IsEnginePdfSupportedFile(const WCHAR* fileName, bool sniff = false);
EngineBase* CreateEnginePdfFromFile(const WCHAR* fileName, PasswordUI* pwdUI = nullptr);
EngineBase* CreateEnginePdfFromStream(IStream* stream, PasswordUI* pwdUI = nullptr);

bool EnginePdfSaveUpdated(EngineBase*, std::string_view filePath);
std::string_view LoadEmbeddedPDFFile(const WCHAR* filePath);
const WCHAR* ParseEmbeddedStreamNumber(const WCHAR* path, int* streamNoOut);
