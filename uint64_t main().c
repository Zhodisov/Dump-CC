14000c775        __chkstk(0x1180)
14000c784        void var_11a8
14000c784        int64_t rax_1 = __security_cookie ^ &var_11a8
14000c794        int32_t r12 = *__p___argc()
14000c7a4        wchar16** r13 = *__p___wargv()
14000c7a7        wchar16* _String_1 = sub_14000be20("NUITKA_ONEFILE_PARENT")
14000c7af        wchar16* _String = _String_1
14000c7af        
14000c7b5        if (_String_1 == 0)
14000c7b5            goto label_14000c8bd
14000c7b5        
14000c7bf        char _Source
14000c7bf        char var_1157
14000c7bf        wchar16* var_1150
14000c7bf        wchar16 var_1038
14000c7bf        
14000c7bf        if (*_String_1 != 0)
14000c7dd            *_errno() = 0
14000c7e0            var_1150 = nullptr
14000c7e5            uint32_t dwProcessId = wcstoul(_String, _EndPtr: &var_1150, _Radix: 0xa)
14000c7e5            
14000c805            if (*_errno() != 0 || *var_1150 != 0)
14000c89c                _String = nullptr
14000c8a6            label_14000c8a6:
14000c8a6                sub_14000c660("NUITKA_ONEFILE_PARENT")
14000c8b2                sub_14000c660("NUITKA_ONEFILE_START")
14000c8b2                goto label_14000c8bd
14000c8b2            
14000c815            HANDLE rax_6 =
14000c815                OpenProcess(dwDesiredAccess: 0x410, bInheritHandle: 0, dwProcessId)
14000c815            
14000c821            if (rax_6 == 0)
14000c885                _String = nullptr
14000c821            else
14000c839                if (K32GetModuleFileNameExW(hProcess: rax_6, hModule: nullptr, 
14000c839                        lpFilename: &var_1038, nSize: 0x800) != 0)
14000c851                    sub_14000c310(&var_1038, &var_1038, 0x800, 1)
14000c85f                    sub_14000bfa0(&var_1038, 0x800)
14000c839                else
14000c83b                    _String = nullptr
14000c83b                
14000c879                wchar16* _String_2 = nullptr
14000c879                
14000c87c                if (wcscmp(_String1: &var_1038, _String2: sub_14000ba70(1)) == 0)
14000c87c                    _String_2 = _String
14000c87c                
14000c880                _String = _String_2
14000c880            
14000c88b            CloseHandle(hObject: rax_6)
14000c88b            
14000c894            if (_String == 0)
14000c894                goto label_14000c8a6
14000c7bf        else
14000c7c1            _String = nullptr
14000c8bd        label_14000c8bd:
14000c8bd            int64_t rdi_1 = 0x80
14000c8d2            char var_10b8[0x10]
14000c8d2            sub_14000c5a0(&var_10b8, 0x80, "%ld", zx.q(GetCurrentProcessId()))
14000c8d7            char i = var_10b8[0]
14000c8db            char (* rsi_1)[0x10] = &var_10b8
14000c8df            var_1038 = 0
14000c8e4            int16_t* rbx_3 = &var_1038
14000c8e4            
14000c8ea            for (; i != 0; i = *rsi_1)
14000c8f6                _Source = i
14000c8ff                var_1157 = 0
14000c909                uint64_t rax_11 = mbstowcs(_Dest: &var_1150, &_Source, _MaxCount: 2)
14000c913                int64_t rax_12
14000c913                int16_t* rcx_11
14000c913                
14000c913                if (rax_11 == 1)
14000c919                    rax_12 = rdi_1
14000c91c                    rcx_11 = rbx_3
14000c91c                    
14000c923                    if (*rbx_3 != 0)
14000c93b                        do
14000c930                            rcx_11 = &rcx_11[1]
14000c934                            rax_12 -= 1
14000c93b                        while (*rcx_11 != 0)
14000c93b                
14000c941                if (rax_11 != 1 || rax_12 u< 1)
14000c9e8                    abort()
14000c9e8                    noreturn
14000c9e8                
14000c94c                rsi_1 = &(*rsi_1)[1]
14000c94f                *rcx_11 = var_1150.w
14000c952                rbx_3 = &rbx_3[1]
14000c956                rdi_1 -= 1
14000c959                rcx_11[1] = 0
14000c959            
14000c970            sub_14000c4b0("NUITKA_ONEFILE_PARENT", &var_1038)
14000c989        char rax_14 =
14000c989            sub_14000b360(&data_140028940, u"{TEMP}\onefile_{PID}_{TIME}", 0x1000)
14000c99e        HRSRC hResInfo = FindResourceA(hModule: nullptr, lpName: 0x1b, lpType: 0xa)
14000c9b5        int64_t rax_16 = LockResource(hResData: LoadResource(hModule: nullptr, hResInfo))
14000c9c0        data_1400200e8 = rax_16
14000c9c7        data_1400200f0 = rax_16
14000c9d6        data_1400200f8 = zx.q(SizeofResource(hModule: nullptr, hResInfo))
14000c9d6        
14000c9e0        if (rax_14 == 0)
14000cff4            sub_14000b970(u"{TEMP}\onefile_{PID}_{TIME}")
14000cff4            noreturn
14000cff4        
14000c9f2        if (_String == 0
14000c9f2                && SetConsoleCtrlHandler(HandlerRoutine: sub_14000c140, Add: 1) == 0)
14000d001            sub_14000b8e0("Error, failed to register signal handler.")
14000d001            noreturn
14000d001        
14000ca0e        int16_t* rax_20 = data_1400200f0
14000ca15        int16_t rcx_13 = *rax_20
14000ca18        char rdx_8 = rax_20[1].b
14000ca20        _Source.w = rcx_13
14000ca25        data_1400200f0 = rax_20 + 3
14000ca25        
14000ca43        if (rcx_13.b != 0x4b || var_1157 != 0x41 || rdx_8 != 0x59)
14000cfe7            sub_14000b930()
14000cfe7            noreturn
14000cfe7        
14000ca4e        data_140020108 = 0
14000ca55        int64_t rax_22 = malloc(_Size: 0x20000)
14000ca5b        data_140020120 = rax_22
14000ca5b        
14000ca65        if (rax_22 != 0)
14000ca6b            void* rax_23 = sub_140005870()
14000ca70            data_140020100 = rax_23
14000ca70            
14000ca7a            if (rax_23 != 0)
14000ca8e                data_140020108 = data_1400200f0
14000ca9c                data_140020110 = data_1400200f8
14000caa3                data_140020118 = 0
14000caaa                data_14001408c = 1
14000caaa                
14000cac2                while (true)
14000cac2                    int16_t* rbx_5 = &data_140020140
14000cac9                    sub_14000c1e0(&_Source, 2)
14000cace                    int16_t rax_26 = _Source.w
14000cad3                    data_140020140 = rax_26
14000cadd                    int16_t i_1
14000cadd                    
14000cadd                    if (rax_26 != 0)
14000cb0e                        do
14000cafa                            rbx_5 = &rbx_5[1]
14000cafe                            sub_14000c1e0(&_Source, 2)
14000cb03                            i_1 = _Source.w
14000cb08                            *rbx_5 = i_1
14000cb0e                        while (i_1 != 0)
14000cb0e                    
14000cb17                    uint64_t result
14000cb17                    
14000cb17                    if (rax_26 == 0 || data_140020140 == i_1)
14000cd94                        sub_140009e50(data_140020100)
14000cda0                        free(_Block: data_140020120)
14000cda6                        int16_t rax_34 = data_14001a0b0
14000cdb4                        int64_t rbx_6 = 0x1001
14000cdb4                        
14000cdbc                        if (rax_34 == 0)
14000cdc6                            GetModuleFileNameW(hModule: nullptr, 
14000cdc6                                lpFilename: &data_14001a0b0, nSize: 0x1001)
14000cdd4                            int64_t rcx_29 = 0x1001
14000cdd6                            int16_t* rax_35 = &data_14001a0b0
14000cdd6                            
14000cdd9                            if (data_14001a0b0 != 0)
14000cdf5                                do
14000cde4                                    if (rcx_29 u< 1)
14000cde4                                        goto label_14000cec6
14000cde4                                    
14000cdea                                    rax_35 = &rax_35[1]
14000cdee                                    rcx_29 -= 1
14000cdf5                                while (*rax_35 != 0)
14000cdf5                            
14000cdfa                            *rax_35 = 0
14000ce05                            sub_14000bfa0(&data_1400180a0, 0x1001)
14000ce0a                            rax_34 = data_14001a0b0
14000ce0a                        
14000ce18                        int16_t* rcx_30 = &data_140014090
14000ce18                        
14000ce1e                        if (rax_34 != 0)
14000ce40                            do
14000ce27                                if (rbx_6 u< 1)
14000ce27                                    goto label_14000cec6
14000ce27                                
14000ce31                                rbx_6 -= 1
14000ce34                                *rcx_30 = *(0x6020 + rcx_30)
14000ce37                                rcx_30 = &rcx_30[1]
14000ce40                            while (*(0x6020 + rcx_30) != 0)
14000ce40                        
14000ce42                        *rcx_30 = 0
14000ce46                        int16_t* r9_4 = nullptr
14000ce49                        int16_t i_2 = data_140014090
14000ce50                        int16_t* rcx_31 = &data_140014090
14000ce50                        
14000ce56                        if (i_2 != 0)
14000ce79                            int16_t* rax_37
14000ce79                            
14000ce79                            do
14000ce60                                bool cond:4_1 = i_2 != 0x5c
14000ce64                                rax_37 = rcx_31
14000ce67                                i_2 = rcx_31[1]
14000ce67                                
14000ce6b                                if (cond:4_1)
14000ce6b                                    rax_37 = r9_4
14000ce6b                                
14000ce6f                                rcx_31 = &rcx_31[1]
14000ce73                                r9_4 = rax_37
14000ce79                            while (i_2 != 0)
14000ce79                            
14000ce7e                            if (rax_37 != 0)
14000ce80                                *rax_37 = 0
14000ce80                        
14000ce8e                        sub_14000c4b0("NUITKA_ONEFILE_DIRECTORY", &data_140014090)
14000ce9e                        sub_14000c4b0("NUITKA_ORIGINAL_ARGV0", *r13)
14000ceab                        uint32_t rax_38
14000ceab                        
14000ceab                        if (data_1400160a0 == 0)
14000cebc                            rax_38 = GetModuleFileNameW(hModule: nullptr, 
14000cebc                                lpFilename: &data_1400160a0, nSize: 0x1000)
14000cebc                        
14000cec4                        if (data_1400160a0 == 0 && rax_38 == 0)
14000cec6                        label_14000cec6:
14000cec6                            abort()
14000cec6                            noreturn
14000cec6                        
14000ced2                        STARTUPINFOW startupInfo
14000ced2                        startupInfo.dwXCountChars = 0
14000ced2                        startupInfo.dwYCountChars = 0
14000ced2                        startupInfo.dwFillAttribute = 0
14000ced2                        startupInfo.dwFlags = 0
14000cedb                        startupInfo.dwFlags = 0x100
14000cee2                        startupInfo.cb = 0
14000cee2                        startupInfo.lpReserved = 0
14000cee6                        startupInfo.hStdError = 0
14000ceea                        startupInfo.lpDesktop = 0
14000ceea                        startupInfo.lpTitle = 0
14000ceee                        startupInfo.dwX = 0
14000ceee                        startupInfo.dwY = 0
14000ceee                        startupInfo.dwXSize = 0
14000ceee                        startupInfo.dwYSize = 0
14000cef2                        startupInfo.wShowWindow = 0
14000cef2                        startupInfo.cbReserved2 = 0
14000cef2                        startupInfo.lpReserved2 = 0
14000cef6                        startupInfo.hStdInput = 0
14000cef6                        startupInfo.hStdOutput = 0
14000cf05                        startupInfo.hStdInput = GetStdHandle(nStdHandle: STD_INPUT_HANDLE)
14000cf14                        startupInfo.hStdOutput =
14000cf14                            GetStdHandle(nStdHandle: STD_OUTPUT_HANDLE)
14000cf1e                        startupInfo.hStdError = GetStdHandle(nStdHandle: STD_ERROR_HANDLE)
14000cf22                        startupInfo.cb = 0x68
14000cf29                        sub_14000baf0()
14000cf73                        PROCESS_INFORMATION processInformation
14000cf73                        
14000cf73                        if (CreateProcessW(lpApplicationName: &data_1400160a0, 
14000cf73                                lpCommandLine: &data_14002c940, 
14000cf73                                lpProcessAttributes: nullptr, lpThreadAttributes: nullptr, 
14000cf73                                bInheritHandles: 1, 
14000cf73                                dwCreationFlags: NORMAL_PRIORITY_CLASS, lpEnvironment: 0, 
14000cf73                                lpCurrentDirectory: nullptr, lpStartupInfo: &startupInfo, 
14000cf73                                lpProcessInformation: &processInformation) == 0)
14000d046                            sub_14000b920("Error, couldn't launch child", GetLastError())
14000d046                            noreturn
14000d046                        
14000cf7e                        CloseHandle(hObject: processInformation.hThread)
14000cf84                        HANDLE hProcess = processInformation.hProcess
14000cf89                        data_140014080 = hProcess
14000cf90                        uint32_t exitCode = 0
14000cf90                        
14000cf98                        if (hProcess != 0)
14000cf9f                            WaitForSingleObject(hHandle: hProcess, 
14000cf9f                                dwMilliseconds: 0xffffffff)
14000cf9f                            
14000cfb9                            if (GetExitCodeProcess(hProcess: data_140014080, 
14000cfb9                                    lpExitCode: &exitCode) == 0)
14000cfbb                                exitCode = 1
14000cfbb                            
14000cfca                            CloseHandle(hObject: data_140014080)
14000cfd0                            data_140014080 = 0
14000cfd0                        
14000cfd9                        sub_14000af50(0)
14000cfde                        result = zx.q(exitCode)
14000cd67                        __security_check_cookie(rax_1 ^ &var_11a8)
14000cd8c                        return result
14000cd8c                    
14000cb1d                    bool cond:2_1 = data_140028940 == i_1
14000cb24                    int64_t rdx_9 = 0x1000
14000cb29                    data_14003d140 = 0
14000cb31                    int16_t* rcx_16 = &data_14003d140
14000cb31                    
14000cb34                    if (not(cond:2_1))
14000cb5f                        do
14000cb44                            if (rdx_9 u< 1)
14000cb44                                goto label_14000cec6
14000cb44                            
14000cb4f                            rdx_9 -= 1
14000cb52                            *rcx_16 = *(-0xfffffffffffeb800 + rcx_16)
14000cb55                            rcx_16 = &rcx_16[1]
14000cb5f                        while (*(-0xfffffffffffeb800 + rcx_16) != 0)
14000cb5f                    
14000cb61                    *rcx_16 = 0
14000cb65                    int16_t* rax_28 = &data_14003d140
14000cb70                    int64_t rcx_17 = 0x1000
14000cb70                    
14000cb75                    if (data_14003d140 != 0)
14000cb8b                        do
14000cb80                            rax_28 = &rax_28[1]
14000cb84                            rcx_17 -= 1
14000cb8b                        while (*rax_28 != 0)
14000cb8b                    
14000cb91                    if (data_14003d140 != 0 && rcx_17 u< 1)
14000cb91                        goto label_14000cec6
14000cb91                    
14000cb97                    *rax_28 = 0x5c
14000cb9d                    int64_t rdx_10 = 0x1000
14000cbaa                    int16_t* rax_29 = &data_14003d140
14000cbaa                    
14000cbad                    if (data_14003d140 != 0)
14000cbbb                        do
14000cbb0                            rax_29 = &rax_29[1]
14000cbb4                            rdx_10 -= 1
14000cbbb                        while (*rax_29 != 0)
14000cbbb                    
14000cbc4                    int16_t* r8_3 = &data_140020140 - rax_29
14000cbc4                    
14000cbef                    do
14000cbd4                        if (rdx_10 u< 1)
14000cbd4                            goto label_14000cec6
14000cbd4                        
14000cbdf                        rdx_10 -= 1
14000cbe2                        *rax_29 = *(r8_3 + rax_29)
14000cbe5                        rax_29 = &rax_29[1]
14000cbef                    while (*(r8_3 + rax_29) != 0)
14000cbef                    
14000cbf1                    bool cond:6_1 = data_14003c940 != 0
14000cbf9                    *rax_29 = 0
14000cbf9                    
14000cbfd                    if (not(cond:6_1))
14000cc07                        int64_t rdx_11 = 0x1000
14000cc0c                        int16_t* rcx_19 = &data_14003c940
14000cc0c                        
14000cc0f                        if (data_14003d140 != 0)
14000cc3f                            do
14000cc24                                if (rdx_11 u< 1)
14000cc24                                    goto label_14000cec6
14000cc24                                
14000cc2f                                rdx_11 -= 1
14000cc32                                *rcx_19 = *(0x800 + rcx_19)
14000cc35                                rcx_19 = &rcx_19[1]
14000cc3f                            while (*(0x800 + rcx_19) != 0)
14000cc3f                        
14000cc41                        *rcx_19 = 0
14000cc41                        
14000cc48                        if (_String != 0)
14000cd1c                            AddDllDirectory(NewDirectory: &data_140028940)
14000cd2d                            HMODULE hModule = LoadLibraryExW(
14000cd2d                                lpLibFileName: &data_14003c940, hFile: nullptr, 
14000cd2d                                dwFlags: LOAD_WITH_ALTERED_SEARCH_PATH)
14000cd2d                            
14000cd36                            if (hModule == 0)
14000d015                                sub_14000ba00("Error, load DLL.", GetLastError())
14000d015                                noreturn
14000d015                            
14000cd46                            int64_t rax_33 =
14000cd46                                GetProcAddress(hModule, lpProcName: "run_code")
14000cd46                            
14000cd4f                            if (rax_33 == 0)
14000d022                                sub_14000b8e0("Error, DLL entry point not found.")
14000d022                                noreturn
14000d022                            
14000cd5b                            result = rax_33(zx.q(r12), r13)
14000cd67                            __security_check_cookie(rax_1 ^ &var_11a8)
14000cd8c                            return result
14000cd8c                    
14000cc58                    int64_t var_1148
14000cc58                    sub_14000c1e0(&var_1148, 8)
14000cc60                    sub_14000b100(&data_14003d140)
14000cc88                    HANDLE rax_31 = CreateFileW(lpFileName: &data_14003d140, 
14000cc88                        dwDesiredAccess: 0x40000000, dwShareMode: FILE_SHARE_WRITE, 
14000cc88                        lpSecurityAttributes: nullptr, 
14000cc88                        dwCreationDisposition: CREATE_ALWAYS, 
14000cc88                        dwFlagsAndAttributes: SECURITY_ANONYMOUS, hTemplateFile: nullptr)
14000cc88                    
14000cc95                    if (rax_31 == -1)
14000cc95                        break
14000cc95                    
14000cc9b                    int64_t rdi_3 = var_1148
14000cc9b                    
14000cca3                    if (rdi_3 != 0)
14000ccfb                        int64_t nNumberOfBytesToWrite_1
14000ccfb                        int64_t temp0_1
14000ccfb                        
14000ccfb                        do
14000ccb0                            uint32_t nNumberOfBytesToWrite = 0x8000
14000ccb0                            
14000ccbf                            if (rdi_3 u<= 0x8000)
14000ccbf                                nNumberOfBytesToWrite = rdi_3.d
14000ccbf                            
14000ccc2                            nNumberOfBytesToWrite_1 = sx.q(nNumberOfBytesToWrite)
14000ccc8                            sub_14000c1e0(&data_140020940, nNumberOfBytesToWrite_1)
14000ccd7                            var_1150.d = 0
14000cce2                            enum FILE_CREATION_DISPOSITION lpOverlapped
14000cce2                            lpOverlapped.q = 0
14000cce2                            
14000ccf2                            if (WriteFile(hFile: rax_31, lpBuffer: &data_140020940, 
14000ccf2                                    nNumberOfBytesToWrite, 
14000ccf2                                    lpNumberOfBytesWritten: &var_1150, lpOverlapped) == 0)
14000d028                                sub_14000b9e0()
14000d028                                noreturn
14000d028                            
14000ccf8                            temp0_1 = rdi_3
14000ccf8                            rdi_3 -= nNumberOfBytesToWrite_1
14000ccfb                        while (temp0_1 != nNumberOfBytesToWrite_1)
14000ccfb                    
14000cd07                    CloseHandle(hObject: rax_31)
14000cd07                
14000d031                sub_14000b9a0(&data_14003d140)
14000d031                noreturn
14000d031        
14000d04c        sub_14000b950()
14000d04c        noreturn
