#ifdef __cplusplus
extern "C" {
#endif
extern uint32 cppISteamUtils_SteamUtils008_GetSecondsSinceAppActive(void *);
extern uint32 cppISteamUtils_SteamUtils008_GetSecondsSinceComputerActive(void *);
extern EUniverse cppISteamUtils_SteamUtils008_GetConnectedUniverse(void *);
extern uint32 cppISteamUtils_SteamUtils008_GetServerRealTime(void *);
extern const char * cppISteamUtils_SteamUtils008_GetIPCountry(void *);
extern bool cppISteamUtils_SteamUtils008_GetImageSize(void *, int, uint32 *, uint32 *);
extern bool cppISteamUtils_SteamUtils008_GetImageRGBA(void *, int, uint8 *, int);
extern bool cppISteamUtils_SteamUtils008_GetCSERIPPort(void *, uint32 *, uint16 *);
extern uint8 cppISteamUtils_SteamUtils008_GetCurrentBatteryPower(void *);
extern uint32 cppISteamUtils_SteamUtils008_GetAppID(void *);
extern void cppISteamUtils_SteamUtils008_SetOverlayNotificationPosition(void *, ENotificationPosition);
extern bool cppISteamUtils_SteamUtils008_IsAPICallCompleted(void *, SteamAPICall_t, bool *);
extern ESteamAPICallFailure cppISteamUtils_SteamUtils008_GetAPICallFailureReason(void *, SteamAPICall_t);
extern bool cppISteamUtils_SteamUtils008_GetAPICallResult(void *, SteamAPICall_t, void *, int, int, bool *);
extern void cppISteamUtils_SteamUtils008_RunFrame(void *);
extern uint32 cppISteamUtils_SteamUtils008_GetIPCCallCount(void *);
extern void cppISteamUtils_SteamUtils008_SetWarningMessageHook(void *, SteamAPIWarningMessageHook_t);
extern bool cppISteamUtils_SteamUtils008_IsOverlayEnabled(void *);
extern bool cppISteamUtils_SteamUtils008_BOverlayNeedsPresent(void *);
extern SteamAPICall_t cppISteamUtils_SteamUtils008_CheckFileSignature(void *, const char *);
extern bool cppISteamUtils_SteamUtils008_ShowGamepadTextInput(void *, EGamepadTextInputMode, EGamepadTextInputLineMode, const char *, uint32, const char *);
extern uint32 cppISteamUtils_SteamUtils008_GetEnteredGamepadTextLength(void *);
extern bool cppISteamUtils_SteamUtils008_GetEnteredGamepadTextInput(void *, char *, uint32);
extern const char * cppISteamUtils_SteamUtils008_GetSteamUILanguage(void *);
extern bool cppISteamUtils_SteamUtils008_IsSteamRunningInVR(void *);
extern void cppISteamUtils_SteamUtils008_SetOverlayNotificationInset(void *, int, int);
extern bool cppISteamUtils_SteamUtils008_IsSteamInBigPictureMode(void *);
extern void cppISteamUtils_SteamUtils008_StartVRDashboard(void *);
#ifdef __cplusplus
}
#endif
