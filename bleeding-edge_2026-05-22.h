NTSTATUS WINAPI NtAcceptConnectPort( HANDLE *handle, ULONG id, LPC_MESSAGE *msg, BOOLEAN accept, LPC_SECTION_WRITE *write, LPC_SECTION_READ *read ); // sync.c / winternl.h
NTSTATUS WINAPI NtAccessCheck( PSECURITY_DESCRIPTOR descr, HANDLE token, ACCESS_MASK access, GENERIC_MAPPING *mapping, PRIVILEGE_SET *privs, ULONG *retlen, ULONG *access_granted, NTSTATUS *access_status); // security.c / winternl.h
NTSTATUS WINAPI NtAccessCheckAndAuditAlarm( UNICODE_STRING *subsystem, HANDLE handle, UNICODE_STRING *typename, UNICODE_STRING *objectname, PSECURITY_DESCRIPTOR descr, ACCESS_MASK access, GENERIC_MAPPING *mapping, BOOLEAN creation, ACCESS_MASK *access_granted, NTSTATUS *access_status, BOOLEAN *onclose ); // security.c / winternl.h
NTSTATUS WINAPI NtAccessCheckByTypeAndAuditAlarm( UNICODE_STRING *subsystem, HANDLE handle, UNICODE_STRING *typename, UNICODE_STRING *objectname, PSECURITY_DESCRIPTOR descr, PSID sid, ACCESS_MASK access, AUDIT_EVENT_TYPE audit_type, ULONG flags, OBJECT_TYPE_LIST *obj_list, ULONG list_len, GENERIC_MAPPING *mapping, BOOLEAN creation, ACCESS_MASK *access_granted, NTSTATUS *access_status, BOOLEAN *onclose ); // security.c / winternl.h
NTSTATUS WINAPI NtAddAtom( const WCHAR *name, ULONG length, RTL_ATOM *atom ); // sync.c / winternl.h
NTSTATUS WINAPI NtAdjustGroupsToken( HANDLE token, BOOLEAN reset, TOKEN_GROUPS *groups, ULONG length, TOKEN_GROUPS *prev, ULONG *retlen ); // security.c / winternl.h
NTSTATUS WINAPI NtAdjustPrivilegesToken( HANDLE token, BOOLEAN disable, TOKEN_PRIVILEGES *privs, DWORD length, TOKEN_PRIVILEGES *prev, DWORD *retlen ); // security.c / winternl.h
NTSTATUS WINAPI NtAlertMultipleThreadByThreadId( HANDLE *tids, ULONG count, void *unk1, void *unk2 ); // sync.c / winternl.h
NTSTATUS WINAPI NtAlertResumeThread( HANDLE handle, ULONG *count ); // thread.c / winternl.h
NTSTATUS WINAPI NtAlertThread( HANDLE handle ); // thread.c / winternl.h
NTSTATUS WINAPI NtAlertThreadByThreadId( HANDLE tid ); // sync.c / winternl.h
NTSTATUS WINAPI NtAllocateLocallyUniqueId( LUID *luid ); // security.c / winternl.h
NTSTATUS WINAPI NtAllocateReserveObject( HANDLE *handle, const OBJECT_ATTRIBUTES *attr, MEMORY_RESERVE_OBJECT_TYPE type ); // server.c / winternl.h
NTSTATUS WINAPI NtAllocateUuids( ULARGE_INTEGER *time, ULONG *delta, ULONG *sequence, UCHAR *seed ); // security.c / winternl.h
NTSTATUS WINAPI NtAllocateVirtualMemory( HANDLE process, PVOID *ret, ULONG_PTR zero_bits, SIZE_T *size_ptr, ULONG type, ULONG protect ); // virtual.c / winternl.h
NTSTATUS SYSCALL_API NtAllocateVirtualMemoryEx( HANDLE process, PVOID *ret, SIZE_T *size_ptr, ULONG type, ULONG protect, MEM_EXTENDED_PARAMETER *parameters, ULONG count ); // signal_arm64ec.c / virtual.c / winternl.h
NTSTATUS WINAPI NtAreMappedFilesTheSame(PVOID addr1, PVOID addr2); // virtual.c / winternl.h
NTSTATUS WINAPI NtAssignProcessToJobObject( HANDLE job, HANDLE process ); // sync.c / winternl.h
NTSTATUS WINAPI NtCallbackReturn( void *ret_ptr, ULONG ret_len, NTSTATUS status ); // signal_arm.c / signal_arm64.c / signal_i386.c / signal_x86_64.c / winternl.h
NTSTATUS WINAPI NtCancelIoFile( HANDLE handle, IO_STATUS_BLOCK *io_status ); // file.c / winternl.h
NTSTATUS WINAPI NtCancelIoFileEx( HANDLE handle, IO_STATUS_BLOCK *io, IO_STATUS_BLOCK *io_status ); // file.c / winternl.h
NTSTATUS WINAPI NtCancelSynchronousIoFile( HANDLE handle, IO_STATUS_BLOCK *io, IO_STATUS_BLOCK *io_status ); // file.c / winternl.h
NTSTATUS WINAPI NtCancelTimer( HANDLE handle, BOOLEAN *state ); // sync.c / winternl.h
NTSTATUS WINAPI NtClearEvent( HANDLE handle ); // sync.c / winternl.h
NTSTATUS WINAPI NtClose( HANDLE handle ); // server.c / winternl.h
NTSTATUS WINAPI NtCloseObjectAuditAlarm( UNICODE_STRING *subsystem, HANDLE handle, BOOLEAN onclose ); // security.c / winternl.h
NTSTATUS WINAPI NtCommitTransaction( HANDLE transaction, BOOLEAN wait ); // sync.c / winternl.h
NTSTATUS WINAPI NtCompareObjects( HANDLE first, HANDLE second ); // server.c / winternl.h
NTSTATUS WINAPI NtCompareTokens( HANDLE first, HANDLE second, BOOLEAN *equal ); // server.c / winternl.h
NTSTATUS WINAPI NtCompleteConnectPort( HANDLE handle ); // sync.c / winternl.h
NTSTATUS WINAPI NtConnectPort( HANDLE *handle, UNICODE_STRING *name, SECURITY_QUALITY_OF_SERVICE *qos, LPC_SECTION_WRITE *write, LPC_SECTION_READ *read, ULONG *max_len, void *info, ULONG *info_len ); // sync.c / winternl.h
NTSTATUS SYSCALL_API NtContinue( CONTEXT *context, BOOLEAN alertable ); // server.c / signal_arm64ec.c / winternl.h
NTSTATUS SYSCALL_API NtContinueEx( CONTEXT *context, KCONTINUE_ARGUMENT *args ); // server.c / signal_arm64ec.c / winternl.h
NTSTATUS WINAPI NtConvertBetweenAuxiliaryCounterAndPerformanceCounter( ULONG flag, ULONGLONG *from, ULONGLONG *to, ULONGLONG *error ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateDebugObject( HANDLE *handle, ACCESS_MASK access, OBJECT_ATTRIBUTES *attr, ULONG flags ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateDirectoryObject( HANDLE *handle, ACCESS_MASK access, OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateEvent( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, EVENT_TYPE type, BOOLEAN state ); // sync.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtCreateEventPair(PHANDLE,ACCESS_MASK,POBJECT_ATTRIBUTES); // winternl.h
NTSTATUS WINAPI NtCreateFile( HANDLE *handle, ACCESS_MASK access, OBJECT_ATTRIBUTES *attr, IO_STATUS_BLOCK *io, LARGE_INTEGER *alloc_size, ULONG attributes, ULONG sharing, ULONG disposition, ULONG options, void *ea_buffer, ULONG ea_length ); // file.c / winternl.h
NTSTATUS WINAPI NtCreateIoCompletion( HANDLE *handle, ACCESS_MASK access, OBJECT_ATTRIBUTES *attr, ULONG threads ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateJobObject( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateKey( HANDLE *key, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, ULONG index, const UNICODE_STRING *class, ULONG options, ULONG *dispos ); // registry.c / winternl.h
NTSTATUS WINAPI NtCreateKeyTransacted( HANDLE *key, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, ULONG index, const UNICODE_STRING *class, ULONG options, HANDLE transacted, ULONG *dispos ); // registry.c / winternl.h
NTSTATUS WINAPI NtCreateKeyedEvent( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, ULONG flags ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateLowBoxToken( HANDLE *token_handle, HANDLE token, ACCESS_MASK access, OBJECT_ATTRIBUTES *attr, SID *sid, ULONG count, SID_AND_ATTRIBUTES *capabilities, ULONG handle_count, HANDLE *handle ); // security.c / winternl.h
NTSTATUS WINAPI NtCreateMailslotFile( HANDLE *handle, ULONG access, OBJECT_ATTRIBUTES *attr, IO_STATUS_BLOCK *io, ULONG options, ULONG quota, ULONG msg_size, LARGE_INTEGER *timeout ); // file.c / winternl.h
NTSTATUS WINAPI NtCreateMutant( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, BOOLEAN owned ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateNamedPipeFile( HANDLE *handle, ULONG access, OBJECT_ATTRIBUTES *attr, IO_STATUS_BLOCK *io, ULONG sharing, ULONG dispo, ULONG options, ULONG pipe_type, ULONG read_mode, ULONG completion_mode, ULONG max_inst, ULONG inbound_quota, ULONG outbound_quota, LARGE_INTEGER *timeout ); // file.c / winternl.h
NTSTATUS WINAPI NtCreatePagingFile( UNICODE_STRING *name, LARGE_INTEGER *min_size, LARGE_INTEGER *max_size, LARGE_INTEGER *actual_size ); // virtual.c / winternl.h
NTSTATUS WINAPI NtCreatePort( HANDLE *handle, OBJECT_ATTRIBUTES *attr, ULONG info_len, ULONG data_len, ULONG *reserved ); // sync.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtCreateProcess(PHANDLE,ACCESS_MASK,POBJECT_ATTRIBUTES,HANDLE,BOOLEAN,HANDLE,HANDLE,HANDLE); // winternl.h
NTSYSAPI NTSTATUS WINAPI NtCreateProfile(PHANDLE,HANDLE,PVOID,ULONG,ULONG,PVOID,ULONG,KPROFILE_SOURCE,KAFFINITY); // winternl.h
NTSTATUS WINAPI NtCreateSection( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, const LARGE_INTEGER *size, ULONG protect, ULONG sec_flags, HANDLE file ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateSectionEx( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, const LARGE_INTEGER *size, ULONG protect, ULONG sec_flags, HANDLE file, MEM_EXTENDED_PARAMETER *parameters, ULONG count ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateSemaphore( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, LONG initial, LONG max ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateSymbolicLinkObject( HANDLE *handle, ACCESS_MASK access, OBJECT_ATTRIBUTES *attr, UNICODE_STRING *target ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateThread( HANDLE *handle, ACCESS_MASK access, OBJECT_ATTRIBUTES *attr, HANDLE process, CLIENT_ID *id, CONTEXT *ctx, INITIAL_TEB *teb, BOOLEAN suspended ); // thread.c / winternl.h
NTSTATUS WINAPI NtCreateThreadEx( HANDLE *handle, ACCESS_MASK access, OBJECT_ATTRIBUTES *attr, HANDLE process, PRTL_THREAD_START_ROUTINE start, void *param, ULONG flags, ULONG_PTR zero_bits, SIZE_T stack_commit, SIZE_T stack_reserve, PS_ATTRIBUTE_LIST *attr_list ); // thread.c / winternl.h
NTSTATUS WINAPI NtCreateTimer( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, TIMER_TYPE type ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateToken( HANDLE *handle, ACCESS_MASK access, OBJECT_ATTRIBUTES *attr, TOKEN_TYPE type, LUID *token_id, LARGE_INTEGER *expire, TOKEN_USER *user, TOKEN_GROUPS *groups, TOKEN_PRIVILEGES *privs, TOKEN_OWNER *owner, TOKEN_PRIMARY_GROUP *group, TOKEN_DEFAULT_DACL *dacl, TOKEN_SOURCE *source); // security.c / winternl.h
NTSTATUS WINAPI NtCreateTransaction( HANDLE *handle, ACCESS_MASK mask, OBJECT_ATTRIBUTES *obj_attr, GUID *guid, HANDLE tm, ULONG options, ULONG isol_level, ULONG isol_flags, PLARGE_INTEGER timeout, UNICODE_STRING *description ); // sync.c / winternl.h
NTSTATUS WINAPI NtCreateUserProcess( HANDLE *process_handle_ptr, HANDLE *thread_handle_ptr, ACCESS_MASK process_access, ACCESS_MASK thread_access, OBJECT_ATTRIBUTES *process_attr, OBJECT_ATTRIBUTES *thread_attr, ULONG process_flags, ULONG thread_flags, RTL_USER_PROCESS_PARAMETERS *params, PS_CREATE_INFO *info, PS_ATTRIBUTE_LIST *ps_attr ); // process.c / winternl.h
NTSYSAPI struct _TEB * WINAPI NtCurrentTeb(void); // thread.c / winnt.h
NTSTATUS WINAPI NtDebugActiveProcess( HANDLE process, HANDLE debug ); // process.c / winternl.h
NTSTATUS WINAPI NtDebugContinue( HANDLE handle, CLIENT_ID *client, NTSTATUS status ); // process.c / winternl.h
NTSTATUS WINAPI NtDelayExecution( BOOLEAN alertable, const LARGE_INTEGER *timeout ); // sync.c / winternl.h
NTSTATUS WINAPI NtDeleteAtom( RTL_ATOM atom ); // sync.c / winternl.h
NTSTATUS WINAPI NtDeleteFile( OBJECT_ATTRIBUTES *attr ); // file.c / winternl.h
NTSTATUS WINAPI NtDeleteKey( HANDLE key ); // registry.c / winternl.h
NTSTATUS WINAPI NtDeleteValueKey( HANDLE key, const UNICODE_STRING *name ); // registry.c / winternl.h
NTSTATUS WINAPI NtDeviceIoControlFile( HANDLE handle, HANDLE event, PIO_APC_ROUTINE apc, void *apc_context, IO_STATUS_BLOCK *io, ULONG code, void *in_buffer, ULONG in_size, void *out_buffer, ULONG out_size ); // file.c / winternl.h
NTSTATUS WINAPI NtDisplayString( UNICODE_STRING *string ); // system.c / winternl.h
NTSTATUS WINAPI NtDuplicateObject( HANDLE source_process, HANDLE source, HANDLE dest_process, HANDLE *dest, ACCESS_MASK access, ULONG attributes, ULONG options ); // server.c / winternl.h
NTSTATUS WINAPI NtDuplicateToken( HANDLE token, ACCESS_MASK access, OBJECT_ATTRIBUTES *attr, BOOLEAN effective_only, TOKEN_TYPE type, HANDLE *handle ); // security.c / winternl.h
NTSTATUS WINAPI NtEnumerateKey( HANDLE handle, ULONG index, KEY_INFORMATION_CLASS info_class, void *info, DWORD length, DWORD *result_len ); // registry.c / winternl.h
NTSTATUS WINAPI NtEnumerateValueKey( HANDLE handle, ULONG index, KEY_VALUE_INFORMATION_CLASS info_class, void *info, DWORD length, DWORD *result_len ); // registry.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtExtendSection(HANDLE,PLARGE_INTEGER); // winternl.h
NTSTATUS WINAPI NtFilterToken( HANDLE token, ULONG flags, TOKEN_GROUPS *disable_sids, TOKEN_PRIVILEGES *privileges, TOKEN_GROUPS *restrict_sids, HANDLE *new_token ); // security.c / winternl.h
NTSTATUS WINAPI NtFindAtom( const WCHAR *name, ULONG length, RTL_ATOM *atom ); // sync.c / winternl.h
NTSTATUS WINAPI NtFlushBuffersFile( HANDLE handle, IO_STATUS_BLOCK *io ); // file.c / winternl.h
NTSTATUS WINAPI NtFlushBuffersFileEx( HANDLE handle, ULONG flags, void *params, ULONG size, IO_STATUS_BLOCK *io ); // file.c / winternl.h
NTSTATUS SYSCALL_API NtFlushInstructionCache( HANDLE process, const void *addr, SIZE_T size ); // signal_arm64ec.c / virtual.c / winternl.h
NTSTATUS WINAPI NtFlushKey( HANDLE key ); // registry.c / winternl.h
NTSTATUS WINAPI NtFlushProcessWriteBuffers(void); // virtual.c / winternl.h
NTSTATUS WINAPI NtFlushVirtualMemory( HANDLE process, LPCVOID *addr_ptr, SIZE_T *size_ptr, ULONG unknown ); // virtual.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtFlushWriteBuffer(VOID); // winternl.h
NTSTATUS SYSCALL_API NtFreeVirtualMemory( HANDLE process, PVOID *addr_ptr, SIZE_T *size_ptr, ULONG type ); // signal_arm64ec.c / virtual.c / winternl.h
NTSTATUS WINAPI NtFsControlFile( HANDLE handle, HANDLE event, PIO_APC_ROUTINE apc, void *apc_context, IO_STATUS_BLOCK *io, ULONG code, void *in_buffer, ULONG in_size, void *out_buffer, ULONG out_size ); // file.c / winternl.h
INT SYSCALL_API NtGdiAbortDoc( HDC hdc ); // main.c / ntgdi.h / printdrv.c
BOOL SYSCALL_API NtGdiAbortPath( HDC hdc ); // main.c / ntgdi.h / path.c
HANDLE SYSCALL_API NtGdiAddFontMemResourceEx( void *ptr, DWORD size, void *dv, ULONG dv_size, DWORD *count ); // font.c / main.c / ntgdi.h
INT SYSCALL_API NtGdiAddFontResourceW( const WCHAR *str, ULONG size, ULONG files, DWORD flags, DWORD tid, void *dv ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiAlphaBlend( HDC hdcDst, int xDst, int yDst, int widthDst, int heightDst, HDC hdcSrc, int xSrc, int ySrc, int widthSrc, int heightSrc, DWORD blend_func, HANDLE xform ); // bitblt.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiAngleArc( HDC hdc, INT x, INT y, DWORD dwRadius, DWORD start_angle, DWORD sweep_angle ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiArcInternal( UINT type, HDC hdc, INT left, INT top, INT right, INT bottom, INT xstart, INT ystart, INT xend, INT yend ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiBeginPath( HDC hdc ); // main.c / ntgdi.h / path.c
BOOL SYSCALL_API NtGdiBitBlt( HDC hdc_dst, INT x_dst, INT y_dst, INT width, INT height, HDC hdc_src, INT x_src, INT y_src, DWORD rop, DWORD bk_color, FLONG fl ); // bitblt.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiCancelDC( HDC hdc ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiCloseFigure( HDC hdc ); // main.c / ntgdi.h / path.c
INT SYSCALL_API NtGdiCombineRgn( HRGN hDest, HRGN hSrc1, HRGN hSrc2, INT mode ); // main.c / ntgdi.h / region.c
BOOL SYSCALL_API NtGdiComputeXformCoefficients( HDC hdc ); // main.c / mapping.c / ntgdi.h
HBITMAP SYSCALL_API NtGdiCreateBitmap( INT width, INT height, UINT planes, UINT bpp, const void *bits ); // bitmap.c / main.c / ntgdi.h
HANDLE SYSCALL_API NtGdiCreateClientObj( ULONG type ); // gdiobj.c / main.c / ntgdi.h
HBITMAP SYSCALL_API NtGdiCreateCompatibleBitmap( HDC hdc, INT width, INT height ); // bitmap.c / main.c / ntgdi.h
HDC SYSCALL_API NtGdiCreateCompatibleDC( HDC hdc ); // dc.c / main.c / ntgdi.h
HBRUSH SYSCALL_API NtGdiCreateDIBBrush( const void *data, UINT coloruse, UINT size, BOOL is_8x8, BOOL pen, const void *client ); // brush.c / main.c / ntgdi.h
HBITMAP SYSCALL_API NtGdiCreateDIBSection( HDC hdc, HANDLE section, DWORD offset, const BITMAPINFO *bmi, UINT usage, UINT header_size, ULONG flags, ULONG_PTR color_space, void **bits ); // dib.c / main.c / ntgdi.h
HBITMAP SYSCALL_API NtGdiCreateDIBitmapInternal( HDC hdc, INT width, INT height, DWORD init, const void *bits, const BITMAPINFO *data, UINT coloruse, UINT max_info, UINT max_bits, ULONG flags, HANDLE xform ); // dib.c / main.c / ntgdi.h
HRGN SYSCALL_API NtGdiCreateEllipticRgn( INT left, INT top, INT right, INT bottom ); // main.c / ntgdi.h / region.c
HPALETTE SYSCALL_API NtGdiCreateHalftonePalette( HDC hdc ); // main.c / ntgdi.h / palette.c
HBRUSH SYSCALL_API NtGdiCreateHatchBrushInternal( INT style, COLORREF color, BOOL pen ); // brush.c / main.c / ntgdi.h
HDC SYSCALL_API NtGdiCreateMetafileDC( HDC hdc ); // emfdrv.c / main.c / ntgdi.h
HPALETTE SYSCALL_API NtGdiCreatePaletteInternal( const LOGPALETTE *palette, UINT count ); // main.c / ntgdi.h / palette.c
HBRUSH SYSCALL_API NtGdiCreatePatternBrushInternal( HBITMAP bitmap, BOOL pen, BOOL is_8x8 ); // brush.c / main.c / ntgdi.h
HPEN SYSCALL_API NtGdiCreatePen( INT style, INT width, COLORREF color, HBRUSH brush ); // main.c / ntgdi.h / pen.c
HRGN SYSCALL_API NtGdiCreateRectRgn( INT left, INT top, INT right, INT bottom ); // main.c / ntgdi.h / region.c
HRGN SYSCALL_API NtGdiCreateRoundRectRgn( INT left, INT top, INT right, INT bottom, INT ellipse_width, INT ellipse_height ); // main.c / ntgdi.h / region.c
HBRUSH SYSCALL_API NtGdiCreateSolidBrush( COLORREF color, HBRUSH brush ); // brush.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIAcquireKeyedMutex( D3DKMT_ACQUIREKEYEDMUTEX *params ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIAcquireKeyedMutex2( D3DKMT_ACQUIREKEYEDMUTEX2 *params ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDICheckOcclusion( const D3DKMT_CHECKOCCLUSION *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDICheckVidPnExclusiveOwnership( const D3DKMT_CHECKVIDPNEXCLUSIVEOWNERSHIP *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDICloseAdapter( const D3DKMT_CLOSEADAPTER *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDICreateAllocation( D3DKMT_CREATEALLOCATION *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDICreateAllocation2( D3DKMT_CREATEALLOCATION *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDICreateDCFromMemory( D3DKMT_CREATEDCFROMMEMORY *desc ); // dib.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDICreateDevice( D3DKMT_CREATEDEVICE *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDICreateKeyedMutex( D3DKMT_CREATEKEYEDMUTEX *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDICreateKeyedMutex2( D3DKMT_CREATEKEYEDMUTEX2 *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDICreateSynchronizationObject( D3DKMT_CREATESYNCHRONIZATIONOBJECT *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDICreateSynchronizationObject2( D3DKMT_CREATESYNCHRONIZATIONOBJECT2 *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIDestroyAllocation( const D3DKMT_DESTROYALLOCATION *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIDestroyAllocation2( const D3DKMT_DESTROYALLOCATION2 *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIDestroyDCFromMemory( const D3DKMT_DESTROYDCFROMMEMORY *desc ); // dib.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIDestroyDevice( const D3DKMT_DESTROYDEVICE *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIDestroyKeyedMutex( const D3DKMT_DESTROYKEYEDMUTEX *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIDestroySynchronizationObject( const D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIEnumAdapters( D3DKMT_ENUMADAPTERS *desc ); // main.c / ntgdi.h / sysparams.c
NTSTATUS SYSCALL_API NtGdiDdDDIEnumAdapters2( D3DKMT_ENUMADAPTERS2 *desc ); // main.c / ntgdi.h / sysparams.c
NTSTATUS SYSCALL_API NtGdiDdDDIEscape( const D3DKMT_ESCAPE *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenAdapterFromDeviceName( D3DKMT_OPENADAPTERFROMDEVICENAME *desc ); // main.c / ntgdi.h / sysparams.c
NTSTATUS SYSCALL_API NtGdiDdDDIOpenAdapterFromHdc( D3DKMT_OPENADAPTERFROMHDC *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenAdapterFromLuid( D3DKMT_OPENADAPTERFROMLUID *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenKeyedMutex( D3DKMT_OPENKEYEDMUTEX *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenKeyedMutex2( D3DKMT_OPENKEYEDMUTEX2 *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenKeyedMutexFromNtHandle( D3DKMT_OPENKEYEDMUTEXFROMNTHANDLE *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenNtHandleFromName( D3DKMT_OPENNTHANDLEFROMNAME *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenResource( D3DKMT_OPENRESOURCE *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenResource2( D3DKMT_OPENRESOURCE *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenResourceFromNtHandle( D3DKMT_OPENRESOURCEFROMNTHANDLE *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenSyncObjectFromNtHandle( D3DKMT_OPENSYNCOBJECTFROMNTHANDLE *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenSyncObjectFromNtHandle2( D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2 *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenSyncObjectNtHandleFromName( D3DKMT_OPENSYNCOBJECTNTHANDLEFROMNAME *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIOpenSynchronizationObject( D3DKMT_OPENSYNCHRONIZATIONOBJECT *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIQueryAdapterInfo( D3DKMT_QUERYADAPTERINFO *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIQueryResourceInfo( D3DKMT_QUERYRESOURCEINFO *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIQueryResourceInfoFromNtHandle( D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIQueryStatistics( D3DKMT_QUERYSTATISTICS *stats ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIQueryVideoMemoryInfo( D3DKMT_QUERYVIDEOMEMORYINFO *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIReleaseKeyedMutex( D3DKMT_RELEASEKEYEDMUTEX *params ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIReleaseKeyedMutex2( D3DKMT_RELEASEKEYEDMUTEX2 *params ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDISetQueuedLimit( D3DKMT_SETQUEUEDLIMIT *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDISetVidPnSourceOwner( const D3DKMT_SETVIDPNSOURCEOWNER *desc ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIShareObjects( UINT count, const D3DKMT_HANDLE *handles, OBJECT_ATTRIBUTES *attr, UINT access, HANDLE *handle ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDISignalSynchronizationObjectFromCpu( const D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU *params ); // d3dkmt.c / main.c / ntgdi.h
NTSTATUS SYSCALL_API NtGdiDdDDIWaitForSynchronizationObjectFromCpu( const D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *params ); // d3dkmt.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiDeleteClientObj( HGDIOBJ handle ); // gdiobj.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiDeleteObjectApp( HGDIOBJ obj ); // gdiobj.c / main.c / ntgdi.h
INT SYSCALL_API NtGdiDescribePixelFormat( HDC hdc, INT format, UINT size, PIXELFORMATDESCRIPTOR *descr ); // main.c / ntgdi.h / painting.c
LONG SYSCALL_API NtGdiDoPalette( HGDIOBJ handle, WORD start, WORD count, void *entries, DWORD func, BOOL inbound ); // main.c / ntgdi.h / palette.c
BOOL SYSCALL_API NtGdiDrawStream( HDC hdc, ULONG in, void *pvin ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiEllipse( HDC hdc, INT left, INT top, INT right, INT bottom ); // main.c / ntgdi.h / painting.c
INT SYSCALL_API NtGdiEndDoc( HDC hdc ); // main.c / ntgdi.h / printdrv.c
INT SYSCALL_API NtGdiEndPage( HDC hdc ); // main.c / ntgdi.h / printdrv.c
BOOL SYSCALL_API NtGdiEndPath( HDC hdc ); // main.c / ntgdi.h / path.c
BOOL SYSCALL_API NtGdiEnumFonts( HDC hdc, ULONG type, ULONG win32_compat, ULONG face_name_len, const WCHAR *face_name, ULONG charset, ULONG *count, void *buf ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiEqualRgn( HRGN hrgn1, HRGN hrgn2 ); // main.c / ntgdi.h / region.c
INT SYSCALL_API NtGdiExcludeClipRect( HDC hdc, INT left, INT top, INT right, INT bottom ); // clipping.c / main.c / ntgdi.h
HPEN SYSCALL_API NtGdiExtCreatePen( DWORD style, DWORD width, ULONG brush_style, ULONG color, ULONG_PTR client_hatch, ULONG_PTR hatch, DWORD style_count, const DWORD *style_bits, ULONG dib_size, BOOL old_style, HBRUSH brush ); // main.c / ntgdi.h / pen.c
HRGN SYSCALL_API NtGdiExtCreateRegion( const XFORM *xform, DWORD count, const RGNDATA *rgndata ); // main.c / ntgdi.h / region.c
INT SYSCALL_API NtGdiExtEscape( HDC hdc, WCHAR *driver, int driver_id, INT escape, INT input_size, const char *input, INT output_size, char *output ); // driver.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiExtFloodFill( HDC hdc, INT x, INT y, COLORREF color, UINT fill_type ); // main.c / ntgdi.h / painting.c
INT SYSCALL_API NtGdiExtGetObjectW( HGDIOBJ handle, INT count, void *buffer ); // gdiobj.c / main.c / ntgdi.h
INT SYSCALL_API NtGdiExtSelectClipRgn( HDC hdc, HRGN rgn, INT mode ); // clipping.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiExtTextOutW( HDC hdc, INT x, INT y, UINT flags, const RECT *lprect, const WCHAR *str, UINT count, const INT *lpDx, DWORD cp ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiFillPath( HDC hdc ); // main.c / ntgdi.h / path.c
BOOL SYSCALL_API NtGdiFillRgn( HDC hdc, HRGN hrgn, HBRUSH hbrush ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiFlattenPath( HDC hdc ); // main.c / ntgdi.h / path.c
BOOL SYSCALL_API NtGdiFlush(void); // gdiobj.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiFontIsLinked( HDC hdc ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiFrameRgn( HDC hdc, HRGN hrgn, HBRUSH hbrush, INT width, INT height ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiGetAndSetDCDword( HDC hdc, UINT method, DWORD value, DWORD *prev_value ); // dc.c / main.c / ntgdi.h
INT SYSCALL_API NtGdiGetAppClipBox( HDC hdc, RECT *rect ); // clipping.c / main.c / ntgdi.h
LONG SYSCALL_API NtGdiGetBitmapBits( HBITMAP hbitmap, LONG count, LPVOID bits ); // bitmap.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetBitmapDimension( HBITMAP hbitmap, LPSIZE size ); // bitmap.c / main.c / ntgdi.h
UINT SYSCALL_API NtGdiGetBoundsRect( HDC hdc, RECT *rect, UINT flags ); // dc.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetCharABCWidthsW( HDC hdc, UINT first, UINT last, WCHAR *chars, ULONG flags, void *buffer ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetCharWidthInfo( HDC hdc, struct char_width_info *info ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetCharWidthW( HDC hdc, UINT first, UINT last, WCHAR *chars, ULONG flags, void *buf ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetColorAdjustment( HDC hdc, COLORADJUSTMENT *ca ); // gdiobj.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetDCDword( HDC hdc, UINT method, DWORD *result ); // dc.c / main.c / ntgdi.h
HANDLE SYSCALL_API NtGdiGetDCObject( HDC hdc, UINT type ); // gdiobj.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetDCPoint( HDC hdc, UINT method, POINT *result ); // dc.c / main.c / ntgdi.h
INT SYSCALL_API NtGdiGetDIBitsInternal( HDC hdc, HBITMAP hbitmap, UINT startscan, UINT lines, void *bits, BITMAPINFO *info, UINT coloruse, UINT max_bits, UINT max_info ); // dib.c / main.c / ntgdi.h
INT SYSCALL_API NtGdiGetDeviceCaps( HDC hdc, INT cap ); // dc.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetDeviceGammaRamp( HDC hdc, void *ptr ); // dc.c / main.c / ntgdi.h
DWORD SYSCALL_API NtGdiGetFontData( HDC hdc, DWORD table, DWORD offset, void *buffer, DWORD length ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetFontFileData( DWORD instance_id, DWORD file_index, UINT64 *offset, void *buff, SIZE_T buff_size ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetFontFileInfo( DWORD instance_id, DWORD file_index, struct font_fileinfo *info, SIZE_T size, SIZE_T *needed ); // font.c / main.c / ntgdi.h
DWORD SYSCALL_API NtGdiGetFontUnicodeRanges( HDC hdc, GLYPHSET *lpgs ); // font.c / main.c / ntgdi.h
DWORD SYSCALL_API NtGdiGetGlyphIndicesW( HDC hdc, const WCHAR *str, INT count, WORD *indices, DWORD flags ); // font.c / main.c / ntgdi.h
DWORD SYSCALL_API NtGdiGetGlyphOutline( HDC hdc, UINT ch, UINT format, GLYPHMETRICS *metrics, DWORD size, void *buffer, const MAT2 *mat2, BOOL ignore_rotation ); // font.c / main.c / ntgdi.h
DWORD SYSCALL_API NtGdiGetKerningPairs( HDC hdc, DWORD count, KERNINGPAIR *kern_pair ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetMiterLimit( HDC hdc, FLOAT *limit ); // dc.c / main.c / ntgdi.h
COLORREF SYSCALL_API NtGdiGetNearestColor( HDC hdc, COLORREF color ); // main.c / ntgdi.h / palette.c
UINT SYSCALL_API NtGdiGetNearestPaletteIndex( HPALETTE hpalette, COLORREF color ); // main.c / ntgdi.h / palette.c
UINT SYSCALL_API NtGdiGetOutlineTextMetricsInternalW( HDC hdc, UINT cbData, OUTLINETEXTMETRICW *lpOTM, ULONG opts ); // font.c / main.c / ntgdi.h
INT SYSCALL_API NtGdiGetPath( HDC hdc, POINT *points, BYTE *types, INT size ); // main.c / ntgdi.h / path.c
COLORREF SYSCALL_API NtGdiGetPixel( HDC hdc, INT x, INT y ); // main.c / ntgdi.h / painting.c
INT SYSCALL_API NtGdiGetRandomRgn( HDC hDC, HRGN hRgn, INT iCode ); // clipping.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetRasterizerCaps( RASTERIZER_STATUS *status, UINT size ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetRealizationInfo( HDC hdc, struct font_realization_info *info ); // font.c / main.c / ntgdi.h
DWORD SYSCALL_API NtGdiGetRegionData( HRGN hrgn, DWORD count, RGNDATA *rgndata ); // main.c / ntgdi.h / region.c
INT SYSCALL_API NtGdiGetRgnBox( HRGN hrgn, RECT *rect ); // main.c / ntgdi.h / region.c
DWORD SYSCALL_API NtGdiGetSpoolMessage( void *ptr1, DWORD data2, void *ptr3, DWORD data4 ); // main.c / ntgdi.h / printdrv.c
UINT SYSCALL_API NtGdiGetSystemPaletteUse( HDC hdc ); // main.c / ntgdi.h / palette.c
UINT SYSCALL_API NtGdiGetTextCharsetInfo( HDC hdc, FONTSIGNATURE *fs, DWORD flags ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetTextExtentExW( HDC hdc, const WCHAR *str, INT count, INT max_ext, INT *nfit, INT *dxs, SIZE *size, UINT flags ); // font.c / main.c / ntgdi.h
INT SYSCALL_API NtGdiGetTextFaceW( HDC hdc, INT count, WCHAR *name, BOOL alias_name ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetTextMetricsW( HDC hdc, TEXTMETRICW *metrics, ULONG flags ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGetTransform( HDC hdc, DWORD which, XFORM *xform ); // dc.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiGradientFill( HDC hdc, TRIVERTEX *vert_array, ULONG nvert, void *grad_array, ULONG ngrad, ULONG mode ); // main.c / ntgdi.h / painting.c
HFONT SYSCALL_API NtGdiHfontCreate( const void *logfont, ULONG size, ULONG type, ULONG flags, void *data ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiIcmBrushInfo( HDC hdc, HBRUSH handle, BITMAPINFO *info, void *bits, ULONG *bits_size, UINT *usage, BOOL *unk, UINT mode ); // brush.c / main.c / ntgdi.h
DWORD SYSCALL_API NtGdiInitSpool(void); // main.c / ntgdi.h / printdrv.c
INT SYSCALL_API NtGdiIntersectClipRect( HDC hdc, INT left, INT top, INT right, INT bottom ); // clipping.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiInvertRgn( HDC hdc, HRGN hrgn ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiLineTo( HDC hdc, INT x, INT y ); // main.c / ntgdi.h / painting.c
ULONG SYSCALL_API NtGdiMakeFontDir( DWORD embed, BYTE *buffer, UINT size, const WCHAR *path, UINT len ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiMaskBlt( HDC hdcDest, INT nXDest, INT nYDest, INT nWidth, INT nHeight, HDC hdcSrc, INT nXSrc, INT nYSrc, HBITMAP hbmMask, INT xMask, INT yMask, DWORD dwRop, DWORD bk_color ); // bitblt.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiModifyWorldTransform( HDC hdc, const XFORM *xform, DWORD mode ); // main.c / mapping.c / ntgdi.h
BOOL SYSCALL_API NtGdiMoveTo( HDC hdc, INT x, INT y, POINT *pt ); // main.c / ntgdi.h / painting.c
INT SYSCALL_API NtGdiOffsetClipRgn( HDC hdc, INT x, INT y ); // clipping.c / main.c / ntgdi.h
INT SYSCALL_API NtGdiOffsetRgn( HRGN hrgn, INT x, INT y ); // main.c / ntgdi.h / region.c
HDC SYSCALL_API NtGdiOpenDCW( UNICODE_STRING *device, const DEVMODEW *devmode, UNICODE_STRING *output, ULONG type, BOOL is_display, HANDLE hspool, DRIVER_INFO_2W *driver_info, void *pdev ); // dc.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiPatBlt( HDC hdc, INT left, INT top, INT width, INT height, DWORD rop ); // bitblt.c / main.c / ntgdi.h
HRGN SYSCALL_API NtGdiPathToRegion( HDC hdc ); // main.c / ntgdi.h / path.c
BOOL SYSCALL_API NtGdiPlgBlt( HDC hdcDest, const POINT *lpPoint, HDC hdcSrc, INT nXSrc, INT nYSrc, INT nWidth, INT nHeight, HBITMAP hbmMask, INT xMask, INT yMask, DWORD bk_color ); // bitblt.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiPolyDraw( HDC hdc, const POINT *points, const BYTE *types, DWORD count ); // main.c / ntgdi.h / painting.c
ULONG SYSCALL_API NtGdiPolyPolyDraw( HDC hdc, const POINT *points, const ULONG *counts, DWORD count, UINT function ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiPtInRegion( HRGN hrgn, INT x, INT y ); // main.c / ntgdi.h / region.c
BOOL SYSCALL_API NtGdiPtVisible( HDC hdc, INT x, INT y ); // clipping.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiRectInRegion( HRGN hrgn, const RECT *rect ); // main.c / ntgdi.h / region.c
BOOL SYSCALL_API NtGdiRectVisible( HDC hdc, const RECT *rect ); // clipping.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiRectangle( HDC hdc, INT left, INT top, INT right, INT bottom ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiRemoveFontMemResourceEx( HANDLE handle ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiRemoveFontResourceW( const WCHAR *str, ULONG size, ULONG files, DWORD flags, DWORD tid, void *dv ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiResetDC( HDC hdc, const DEVMODEW *devmode, BOOL *banding, DRIVER_INFO_2W *driver_info, void *dev ); // dc.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiResizePalette( HPALETTE hPal, UINT count ); // main.c / ntgdi.h / palette.c
BOOL SYSCALL_API NtGdiRestoreDC( HDC hdc, INT level ); // dc.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiRoundRect( HDC hdc, INT left, INT top, INT right, INT bottom, INT ell_width, INT ell_height ); // main.c / ntgdi.h / painting.c
INT SYSCALL_API NtGdiSaveDC( HDC hdc ); // dc.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiScaleViewportExtEx( HDC hdc, INT x_num, INT x_denom, INT y_num, INT y_denom, SIZE *size ); // main.c / mapping.c / ntgdi.h
BOOL SYSCALL_API NtGdiScaleWindowExtEx( HDC hdc, INT x_num, INT x_denom, INT y_num, INT y_denom, SIZE *size ); // main.c / mapping.c / ntgdi.h
HGDIOBJ SYSCALL_API NtGdiSelectBitmap( HDC hdc, HGDIOBJ handle ); // bitmap.c / main.c / ntgdi.h
HGDIOBJ SYSCALL_API NtGdiSelectBrush( HDC hdc, HGDIOBJ handle ); // brush.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiSelectClipPath( HDC hdc, INT mode ); // main.c / ntgdi.h / path.c
HGDIOBJ SYSCALL_API NtGdiSelectFont( HDC hdc, HGDIOBJ handle ); // font.c / main.c / ntgdi.h
HGDIOBJ SYSCALL_API NtGdiSelectPen( HDC hdc, HGDIOBJ handle ); // main.c / ntgdi.h / pen.c
LONG SYSCALL_API NtGdiSetBitmapBits( HBITMAP hbitmap, LONG count, LPCVOID bits ); // bitmap.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiSetBitmapDimension( HBITMAP hbitmap, INT x, INT y, LPSIZE prevSize ); // bitmap.c / main.c / ntgdi.h
UINT SYSCALL_API NtGdiSetBoundsRect( HDC hdc, const RECT *rect, UINT flags ); // dc.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiSetBrushOrg( HDC hdc, INT x, INT y, POINT *oldorg ); // dc.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiSetColorAdjustment( HDC hdc, const COLORADJUSTMENT *ca ); // gdiobj.c / main.c / ntgdi.h
INT SYSCALL_API NtGdiSetDIBitsToDeviceInternal( HDC hdc, INT xDest, INT yDest, DWORD cx, DWORD cy, INT xSrc, INT ySrc, UINT startscan, UINT lines, const void *bits, const BITMAPINFO *bmi, UINT coloruse, UINT max_bits, UINT max_info, BOOL xform_coords, HANDLE xform ); // dib.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiSetDeviceGammaRamp( HDC hdc, void *ptr ); // dc.c / main.c / ntgdi.h
DWORD SYSCALL_API NtGdiSetLayout( HDC hdc, LONG wox, DWORD layout ); // dc.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiSetMagicColors( HDC hdc, DWORD magic, ULONG index ); // main.c / ntgdi.h / palette.c
INT SYSCALL_API NtGdiSetMetaRgn( HDC hdc ); // clipping.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiSetMiterLimit( HDC hdc, DWORD limit, FLOAT *old_limit ); // dc.c / main.c / ntgdi.h
COLORREF SYSCALL_API NtGdiSetPixel( HDC hdc, INT x, INT y, COLORREF color ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiSetPixelFormat( HDC hdc, INT format ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiSetRectRgn( HRGN hrgn, INT left, INT top, INT right, INT bottom ); // main.c / ntgdi.h / region.c
UINT SYSCALL_API NtGdiSetSystemPaletteUse( HDC hdc, UINT use ); // main.c / ntgdi.h / palette.c
BOOL SYSCALL_API NtGdiSetTextJustification( HDC hdc, INT extra, INT breaks ); // font.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiSetVirtualResolution( HDC hdc, DWORD horz_res, DWORD vert_res, DWORD horz_size, DWORD vert_size ); // main.c / mapping.c / ntgdi.h
INT SYSCALL_API NtGdiStartDoc( HDC hdc, const DOCINFOW *doc, BOOL *banding, INT job ); // main.c / ntgdi.h / printdrv.c
INT SYSCALL_API NtGdiStartPage( HDC hdc ); // main.c / ntgdi.h / printdrv.c
BOOL SYSCALL_API NtGdiStretchBlt( HDC hdcDst, INT xDst, INT yDst, INT widthDst, INT heightDst, HDC hdcSrc, INT xSrc, INT ySrc, INT widthSrc, INT heightSrc, DWORD rop, COLORREF bk_color ); // bitblt.c / main.c / ntgdi.h
INT SYSCALL_API NtGdiStretchDIBitsInternal( HDC hdc, INT xDst, INT yDst, INT widthDst, INT heightDst, INT xSrc, INT ySrc, INT widthSrc, INT heightSrc, const void *bits, const BITMAPINFO *bmi, UINT coloruse, DWORD rop, UINT max_info, UINT max_bits, HANDLE xform ); // dib.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiStrokeAndFillPath( HDC hdc ); // main.c / ntgdi.h / path.c
BOOL SYSCALL_API NtGdiStrokePath( HDC hdc ); // main.c / ntgdi.h / path.c
BOOL SYSCALL_API NtGdiSwapBuffers( HDC hdc ); // main.c / ntgdi.h / painting.c
BOOL SYSCALL_API NtGdiTransformPoints( HDC hdc, const POINT *points_in, POINT *points_out, INT count, UINT mode ); // main.c / mapping.c / ntgdi.h
BOOL SYSCALL_API NtGdiTransparentBlt( HDC hdcDest, int xDest, int yDest, int widthDest, int heightDest, HDC hdcSrc, int xSrc, int ySrc, int widthSrc, int heightSrc, UINT crTransparent ); // bitblt.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiUnrealizeObject( HGDIOBJ obj ); // gdiobj.c / main.c / ntgdi.h
BOOL SYSCALL_API NtGdiUpdateColors( HDC hDC ); // main.c / ntgdi.h / palette.c
BOOL SYSCALL_API NtGdiWidenPath( HDC hdc ); // main.c / ntgdi.h / path.c
NTSTATUS SYSCALL_API NtGetContextThread( HANDLE handle, CONTEXT *context ); // signal_arm.c / signal_arm64.c / signal_arm64ec.c / signal_i386.c / signal_x86_64.c / winternl.h
NTSYSAPI ULONG WINAPI NtGetCurrentProcessorNumber(void); // thread.c / winternl.h
NTSYSAPI ULONG WINAPI NtGetCurrentProcessorNumberEx(PROCESSOR_NUMBER*); // winternl.h
NTSTATUS WINAPI NtGetNextProcess( HANDLE process, ACCESS_MASK access, ULONG attributes, ULONG flags, HANDLE *handle ); // process.c / winternl.h
NTSTATUS WINAPI NtGetNextThread( HANDLE process, HANDLE thread, ACCESS_MASK access, ULONG attributes, ULONG flags, HANDLE *handle ); // thread.c / winternl.h
NTSTATUS WINAPI NtGetNlsSectionPtr( ULONG type, ULONG id, void *unknown, void **ptr, SIZE_T *size ); // env.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtGetPlugPlayEvent(ULONG,ULONG,PVOID,ULONG); // winternl.h
NTSYSAPI ULONG WINAPI NtGetTickCount(VOID); // sync.c / time.c / winternl.h
NTSTATUS WINAPI NtGetWriteWatch( HANDLE process, ULONG flags, PVOID base, SIZE_T size, PVOID *addresses, ULONG_PTR *count, ULONG *granularity ); // virtual.c / winternl.h
NTSTATUS WINAPI NtImpersonateAnonymousToken( HANDLE thread ); // security.c / winternl.h
NTSTATUS WINAPI NtImpersonateClientOfPort( HANDLE handle, LPC_MESSAGE *request ); // sync.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtImpersonateThread(HANDLE,HANDLE,PSECURITY_QUALITY_OF_SERVICE); // winternl.h
NTSTATUS WINAPI NtInitializeNlsFiles( void **ptr, LCID *lcid, LARGE_INTEGER *size ); // env.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtInitializeRegistry(BOOLEAN); // winternl.h
NTSTATUS WINAPI NtInitiatePowerAction( POWER_ACTION action, SYSTEM_POWER_STATE state, ULONG flags, BOOLEAN async ); // system.c / winternl.h
NTSTATUS WINAPI NtIsProcessInJob( HANDLE process, HANDLE job ); // sync.c / winternl.h
NTSTATUS WINAPI NtListenPort( HANDLE handle, LPC_MESSAGE *msg ); // sync.c / winternl.h
NTSTATUS WINAPI NtLoadDriver( const UNICODE_STRING *name ); // system.c / winternl.h
NTSTATUS WINAPI NtLoadKey( const OBJECT_ATTRIBUTES *attr, OBJECT_ATTRIBUTES *file ); // registry.c / winternl.h
NTSTATUS WINAPI NtLoadKey2( const OBJECT_ATTRIBUTES *attr, OBJECT_ATTRIBUTES *file, ULONG flags ); // registry.c / winternl.h
NTSTATUS WINAPI NtLoadKeyEx( const OBJECT_ATTRIBUTES *attr, OBJECT_ATTRIBUTES *file, ULONG flags, HANDLE trustkey, HANDLE event, ACCESS_MASK access, HANDLE *roothandle, IO_STATUS_BLOCK *iostatus ); // registry.c / winternl.h
NTSTATUS WINAPI NtLockFile( HANDLE file, HANDLE event, PIO_APC_ROUTINE apc, void* apc_user, IO_STATUS_BLOCK *io_status, LARGE_INTEGER *offset, LARGE_INTEGER *count, ULONG *key, BOOLEAN dont_wait, BOOLEAN exclusive ); // file.c / winternl.h
NTSTATUS WINAPI NtLockVirtualMemory( HANDLE process, PVOID *addr, SIZE_T *size, ULONG unknown ); // virtual.c / winternl.h
NTSTATUS WINAPI NtMakePermanentObject( HANDLE handle ); // sync.c / winternl.h
NTSTATUS WINAPI NtMakeTemporaryObject( HANDLE handle ); // sync.c / winternl.h
NTSTATUS SYSCALL_API NtMapViewOfSection( HANDLE handle, HANDLE process, PVOID *addr_ptr, ULONG_PTR zero_bits, SIZE_T commit_size, const LARGE_INTEGER *offset, SIZE_T *size_ptr, SECTION_INHERIT inherit, ULONG alloc_type, ULONG protect ); // signal_arm64ec.c / virtual.c / winternl.h
NTSTATUS SYSCALL_API NtMapViewOfSectionEx( HANDLE handle, HANDLE process, PVOID *addr_ptr, const LARGE_INTEGER *offset, SIZE_T *size_ptr, ULONG alloc_type, ULONG protect, MEM_EXTENDED_PARAMETER *parameters, ULONG count ); // signal_arm64ec.c / virtual.c / winternl.h
NTSTATUS WINAPI NtNotifyChangeDirectoryFile( HANDLE handle, HANDLE event, PIO_APC_ROUTINE apc, void *apc_context, IO_STATUS_BLOCK *iosb, void *buffer, ULONG buffer_size, ULONG filter, BOOLEAN subtree ); // file.c / winternl.h
NTSTATUS WINAPI NtNotifyChangeKey( HANDLE key, HANDLE event, PIO_APC_ROUTINE apc, void *apc_context, IO_STATUS_BLOCK *io, ULONG filter, BOOLEAN subtree, void *buffer, ULONG length, BOOLEAN async ); // registry.c / winternl.h
NTSTATUS WINAPI NtNotifyChangeMultipleKeys( HANDLE key, ULONG count, OBJECT_ATTRIBUTES *attr, HANDLE event, PIO_APC_ROUTINE apc, void *apc_context, IO_STATUS_BLOCK *io, ULONG filter, BOOLEAN subtree, void *buffer, ULONG length, BOOLEAN async ); // registry.c / winternl.h
NTSTATUS WINAPI NtOpenDirectoryObject( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSTATUS WINAPI NtOpenEvent( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtOpenEventPair(PHANDLE,ACCESS_MASK,const OBJECT_ATTRIBUTES*); // winternl.h
NTSTATUS WINAPI NtOpenFile( HANDLE *handle, ACCESS_MASK access, OBJECT_ATTRIBUTES *attr, IO_STATUS_BLOCK *io, ULONG sharing, ULONG options ); // file.c / winternl.h
NTSTATUS WINAPI NtOpenIoCompletion( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSTATUS WINAPI NtOpenJobObject( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSTATUS WINAPI NtOpenKey( HANDLE *key, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // registry.c / winternl.h
NTSTATUS WINAPI NtOpenKeyEx( HANDLE *key, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, ULONG options ); // registry.c / winternl.h
NTSTATUS WINAPI NtOpenKeyTransacted( HANDLE *key, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, HANDLE transaction ); // registry.c / winternl.h
NTSTATUS WINAPI NtOpenKeyTransactedEx( HANDLE *key, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, ULONG options, HANDLE transaction ); // registry.c / winternl.h
NTSTATUS WINAPI NtOpenKeyedEvent( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSTATUS WINAPI NtOpenMutant( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtOpenObjectAuditAlarm(PUNICODE_STRING,PHANDLE,PUNICODE_STRING,PUNICODE_STRING,PSECURITY_DESCRIPTOR,HANDLE,ACCESS_MASK,ACCESS_MASK,PPRIVILEGE_SET,BOOLEAN,BOOLEAN,PBOOLEAN); // winternl.h
NTSTATUS WINAPI NtOpenProcess( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, const CLIENT_ID *id ); // process.c / winternl.h
NTSTATUS WINAPI NtOpenProcessToken( HANDLE process, DWORD access, HANDLE *handle ); // security.c / winternl.h
NTSTATUS WINAPI NtOpenProcessTokenEx( HANDLE process, DWORD access, DWORD attributes, HANDLE *handle ); // security.c / winternl.h
NTSTATUS WINAPI NtOpenSection( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSTATUS WINAPI NtOpenSemaphore( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSTATUS WINAPI NtOpenSymbolicLinkObject( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSTATUS WINAPI NtOpenThread( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr, const CLIENT_ID *id ); // thread.c / winternl.h
NTSTATUS WINAPI NtOpenThreadToken( HANDLE thread, DWORD access, BOOLEAN self, HANDLE *handle ); // security.c / winternl.h
NTSTATUS WINAPI NtOpenThreadTokenEx( HANDLE thread, DWORD access, BOOLEAN self, DWORD attributes, HANDLE *handle ); // security.c / winternl.h
NTSTATUS WINAPI NtOpenTimer( HANDLE *handle, ACCESS_MASK access, const OBJECT_ATTRIBUTES *attr ); // sync.c / winternl.h
NTSTATUS WINAPI NtPowerInformation( POWER_INFORMATION_LEVEL level, void *input, ULONG in_size, void *output, ULONG out_size ); // system.c / winternl.h
NTSTATUS WINAPI NtPrivilegeCheck( HANDLE token, PRIVILEGE_SET *privs, BOOLEAN *res ); // security.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtPrivilegeObjectAuditAlarm(PUNICODE_STRING,HANDLE,HANDLE,ULONG,PPRIVILEGE_SET,BOOLEAN); // winternl.h
NTSYSAPI NTSTATUS WINAPI NtPrivilegedServiceAuditAlarm(PUNICODE_STRING,PUNICODE_STRING,HANDLE,PPRIVILEGE_SET,BOOLEAN); // winternl.h
NTSTATUS SYSCALL_API NtProtectVirtualMemory( HANDLE process, PVOID *addr_ptr, SIZE_T *size_ptr, ULONG new_prot, ULONG *old_prot ); // signal_arm64ec.c / virtual.c / winternl.h
NTSTATUS WINAPI NtPulseEvent( HANDLE handle, LONG *prev_state ); // sync.c / winternl.h
NTSTATUS WINAPI NtQueryAttributesFile( const OBJECT_ATTRIBUTES *attr, FILE_BASIC_INFORMATION *info ); // file.c / winternl.h
NTSTATUS WINAPI NtQueryDefaultLocale( BOOLEAN user, LCID *lcid ); // env.c / winternl.h
NTSTATUS WINAPI NtQueryDefaultUILanguage( LANGID *lang ); // env.c / winternl.h
NTSTATUS WINAPI NtQueryDirectoryFile( HANDLE handle, HANDLE event, PIO_APC_ROUTINE apc_routine, void *apc_context, IO_STATUS_BLOCK *io, void *buffer, ULONG length, FILE_INFORMATION_CLASS info_class, BOOLEAN single_entry, UNICODE_STRING *mask, BOOLEAN restart_scan ); // file.c / winternl.h
NTSTATUS WINAPI NtQueryDirectoryObject( HANDLE handle, DIRECTORY_BASIC_INFORMATION *buffer, ULONG size, BOOLEAN single_entry, BOOLEAN restart, ULONG *context, ULONG *ret_size ); // sync.c / winternl.h
NTSTATUS WINAPI NtQueryEaFile( HANDLE handle, IO_STATUS_BLOCK *io, void *buffer, ULONG length, BOOLEAN single_entry, void *list, ULONG list_len, ULONG *index, BOOLEAN restart ); // file.c / winternl.h
NTSTATUS WINAPI NtQueryEvent( HANDLE handle, EVENT_INFORMATION_CLASS class, void *info, ULONG len, ULONG *ret_len ); // sync.c / winternl.h
NTSTATUS WINAPI NtQueryFullAttributesFile( const OBJECT_ATTRIBUTES *attr, FILE_NETWORK_OPEN_INFORMATION *info ); // file.c / winternl.h
NTSTATUS WINAPI NtQueryInformationAtom( RTL_ATOM atom, ATOM_INFORMATION_CLASS class, void *ptr, ULONG size, ULONG *retsize ); // sync.c / winternl.h
NTSTATUS WINAPI NtQueryInformationFile( HANDLE handle, IO_STATUS_BLOCK *io, void *ptr, ULONG len, FILE_INFORMATION_CLASS class ); // file.c / winternl.h
NTSTATUS WINAPI NtQueryInformationJobObject( HANDLE handle, JOBOBJECTINFOCLASS class, void *info, ULONG len, ULONG *ret_len ); // sync.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtQueryInformationPort(HANDLE,PORT_INFORMATION_CLASS,PVOID,ULONG,PULONG); // winternl.h
NTSTATUS WINAPI NtQueryInformationProcess( HANDLE handle, PROCESSINFOCLASS class, void *info, ULONG size, ULONG *ret_len ); // process.c / winternl.h
NTSTATUS WINAPI NtQueryInformationThread( HANDLE handle, THREADINFOCLASS class, void *data, ULONG length, ULONG *ret_len ); // thread.c / winternl.h
NTSTATUS WINAPI NtQueryInformationToken( HANDLE token, TOKEN_INFORMATION_CLASS class, void *info, ULONG length, ULONG *retlen ); // security.c / winternl.h
NTSTATUS WINAPI NtQueryInstallUILanguage( LANGID *lang ); // env.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtQueryIntervalProfile(KPROFILE_SOURCE,PULONG); // winternl.h
NTSTATUS WINAPI NtQueryIoCompletion( HANDLE handle, IO_COMPLETION_INFORMATION_CLASS class, void *buffer, ULONG len, ULONG *ret_len ); // sync.c / winternl.h
NTSTATUS WINAPI NtQueryKey( HANDLE handle, KEY_INFORMATION_CLASS info_class, void *info, DWORD length, DWORD *result_len ); // registry.c / winternl.h
NTSTATUS WINAPI NtQueryLicenseValue( const UNICODE_STRING *name, ULONG *type, void *data, ULONG length, ULONG *retlen ); // registry.c / winternl.h
NTSTATUS WINAPI NtQueryMultipleValueKey( HANDLE key, KEY_MULTIPLE_VALUE_INFORMATION *info, ULONG count, void *buffer, ULONG length, ULONG *retlen ); // registry.c / winternl.h
NTSTATUS WINAPI NtQueryMutant( HANDLE handle, MUTANT_INFORMATION_CLASS class, void *info, ULONG len, ULONG *ret_len ); // sync.c / winternl.h
NTSTATUS WINAPI NtQueryObject( HANDLE handle, OBJECT_INFORMATION_CLASS info_class, void *ptr, ULONG len, ULONG *used_len ); // file.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtQueryOpenSubKeys(POBJECT_ATTRIBUTES,PULONG); // winternl.h
NTSTATUS WINAPI NtQueryPerformanceCounter( LARGE_INTEGER *counter, LARGE_INTEGER *frequency ); // sync.c / winternl.h
NTSTATUS WINAPI NtQuerySection( HANDLE handle, SECTION_INFORMATION_CLASS class, void *ptr, SIZE_T size, SIZE_T *ret_size ); // virtual.c / winternl.h
NTSTATUS WINAPI NtQuerySecurityObject( HANDLE handle, SECURITY_INFORMATION info, PSECURITY_DESCRIPTOR descr, ULONG length, ULONG *retlen ); // security.c / winternl.h
NTSTATUS WINAPI NtQuerySemaphore( HANDLE handle, SEMAPHORE_INFORMATION_CLASS class, void *info, ULONG len, ULONG *ret_len ); // sync.c / winternl.h
NTSTATUS WINAPI NtQuerySymbolicLinkObject( HANDLE handle, UNICODE_STRING *target, ULONG *length ); // sync.c / winternl.h
NTSTATUS WINAPI NtQuerySystemEnvironmentValue( UNICODE_STRING *name, WCHAR *buffer, ULONG length, ULONG *retlen ); // system.c / winternl.h
NTSTATUS WINAPI NtQuerySystemEnvironmentValueEx( UNICODE_STRING *name, GUID *vendor, void *buffer, ULONG *retlen, ULONG *attrib ); // system.c / winternl.h
NTSTATUS SYSCALL_API NtQuerySystemInformation( SYSTEM_INFORMATION_CLASS class, void *info, ULONG size, ULONG *ret_size ); // signal_arm64ec.c / system.c / winternl.h
NTSTATUS WINAPI NtQuerySystemInformationEx( SYSTEM_INFORMATION_CLASS class, void *query, ULONG query_len, void *info, ULONG size, ULONG *ret_size ); // system.c / winternl.h
NTSTATUS WINAPI NtQuerySystemTime( LARGE_INTEGER *time ); // sync.c / winternl.h
NTSTATUS WINAPI NtQueryTimer( HANDLE handle, TIMER_INFORMATION_CLASS class, void *info, ULONG len, ULONG *ret_len ); // sync.c / winternl.h
NTSTATUS WINAPI NtQueryTimerResolution( ULONG *min_res, ULONG *max_res, ULONG *current_res ); // sync.c / winternl.h
NTSTATUS WINAPI NtQueryValueKey( HANDLE handle, const UNICODE_STRING *name, KEY_VALUE_INFORMATION_CLASS info_class, void *info, DWORD length, DWORD *result_len ); // registry.c / winternl.h
NTSTATUS WINAPI NtQueryVirtualMemory( HANDLE process, LPCVOID addr, MEMORY_INFORMATION_CLASS info_class, PVOID buffer, SIZE_T len, SIZE_T *res_len ); // virtual.c / winternl.h
NTSTATUS WINAPI NtQueryVolumeInformationFile( HANDLE handle, IO_STATUS_BLOCK *io, void *buffer, ULONG length, FS_INFORMATION_CLASS info_class ); // file.c / winternl.h
NTSTATUS WINAPI NtQueueApcThread( HANDLE handle, PNTAPCFUNC func, ULONG_PTR arg1, ULONG_PTR arg2, ULONG_PTR arg3 ); // thread.c / winternl.h
NTSTATUS WINAPI NtQueueApcThreadEx( HANDLE handle, HANDLE reserve_handle, PNTAPCFUNC func, ULONG_PTR arg1, ULONG_PTR arg2, ULONG_PTR arg3 ); // thread.c / winternl.h
NTSTATUS WINAPI NtQueueApcThreadEx2( HANDLE handle, HANDLE reserve_handle, ULONG flags, PNTAPCFUNC func, ULONG_PTR arg1, ULONG_PTR arg2, ULONG_PTR arg3 ); // thread.c / winternl.h
NTSTATUS SYSCALL_API NtRaiseException( EXCEPTION_RECORD *rec, CONTEXT *context, BOOL first_chance ); // signal_arm64ec.c / thread.c / winternl.h
NTSTATUS WINAPI NtRaiseHardError( NTSTATUS status, ULONG count, ULONG params_mask, void **params, HARDERROR_RESPONSE_OPTION option, HARDERROR_RESPONSE *response ); // system.c / winternl.h
NTSTATUS SYSCALL_API NtReadFile( HANDLE handle, HANDLE event, PIO_APC_ROUTINE apc, void *apc_user, IO_STATUS_BLOCK *io, void *buffer, ULONG length, LARGE_INTEGER *offset, ULONG *key ); // file.c / signal_arm64ec.c / winternl.h
NTSTATUS WINAPI NtReadFileScatter( HANDLE file, HANDLE event, PIO_APC_ROUTINE apc, void *apc_user, IO_STATUS_BLOCK *io, FILE_SEGMENT_ELEMENT *segments, ULONG length, LARGE_INTEGER *offset, ULONG *key ); // file.c / winternl.h
NTSTATUS WINAPI NtReadRequestData( HANDLE handle, LPC_MESSAGE *request, ULONG id, void *buffer, ULONG len, ULONG *retlen ); // sync.c / winternl.h
NTSTATUS WINAPI NtReadVirtualMemory( HANDLE process, const void *addr, void *buffer, SIZE_T size, SIZE_T *bytes_read ); // virtual.c / winternl.h
NTSTATUS WINAPI NtRegisterThreadTerminatePort( HANDLE handle ); // sync.c / winternl.h
NTSTATUS WINAPI NtReleaseKeyedEvent( HANDLE handle, const void *key, BOOLEAN alertable, const LARGE_INTEGER *timeout ); // sync.c / winternl.h
NTSTATUS WINAPI NtReleaseMutant( HANDLE handle, LONG *prev_count ); // sync.c / winternl.h
NTSTATUS WINAPI NtReleaseSemaphore( HANDLE handle, ULONG count, ULONG *previous ); // sync.c / winternl.h
NTSTATUS WINAPI NtRemoveIoCompletion( HANDLE handle, ULONG_PTR *key, ULONG_PTR *value, IO_STATUS_BLOCK *io, LARGE_INTEGER *timeout ); // sync.c / winternl.h
NTSTATUS WINAPI NtRemoveIoCompletionEx( HANDLE handle, FILE_IO_COMPLETION_INFORMATION *info, ULONG count, ULONG *written, LARGE_INTEGER *timeout, BOOLEAN alertable ); // sync.c / winternl.h
NTSTATUS WINAPI NtRemoveProcessDebug( HANDLE process, HANDLE debug ); // process.c / winternl.h
NTSTATUS WINAPI NtRenameKey( HANDLE key, UNICODE_STRING *name ); // registry.c / winternl.h
NTSTATUS WINAPI NtReplaceKey( OBJECT_ATTRIBUTES *attr, HANDLE key, OBJECT_ATTRIBUTES *replace ); // registry.c / winternl.h
NTSTATUS WINAPI NtReplyPort( HANDLE handle, LPC_MESSAGE *reply ); // sync.c / winternl.h
NTSTATUS WINAPI NtReplyWaitReceivePort( HANDLE handle, ULONG *id, LPC_MESSAGE *reply, LPC_MESSAGE *msg ); // sync.c / winternl.h
NTSTATUS WINAPI NtReplyWaitReceivePortEx( HANDLE handle, ULONG *id, LPC_MESSAGE *reply, LPC_MESSAGE *msg, LARGE_INTEGER *timeout ); // sync.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtReplyWaitReplyPort(HANDLE,PLPC_MESSAGE); // winternl.h
NTSYSAPI NTSTATUS WINAPI NtRequestPort(HANDLE,PLPC_MESSAGE); // winternl.h
NTSTATUS WINAPI NtRequestWaitReplyPort( HANDLE handle, LPC_MESSAGE *msg_in, LPC_MESSAGE *msg_out ); // sync.c / winternl.h
NTSTATUS WINAPI NtResetEvent( HANDLE handle, LONG *prev_state ); // sync.c / winternl.h
NTSTATUS WINAPI NtResetWriteWatch( HANDLE process, PVOID base, SIZE_T size ); // virtual.c / winternl.h
NTSTATUS WINAPI NtRestoreKey( HANDLE key, HANDLE file, ULONG flags ); // registry.c / winternl.h
NTSTATUS WINAPI NtResumeProcess( HANDLE handle ); // process.c / winternl.h
NTSTATUS WINAPI NtResumeThread( HANDLE handle, ULONG *count ); // thread.c / winternl.h
NTSTATUS WINAPI NtRollbackTransaction( HANDLE transaction, BOOLEAN wait ); // sync.c / winternl.h
NTSTATUS WINAPI NtSaveKey( HANDLE key, HANDLE file ); // registry.c / winternl.h
NTSTATUS WINAPI NtSecureConnectPort( HANDLE *handle, UNICODE_STRING *name, SECURITY_QUALITY_OF_SERVICE *qos, LPC_SECTION_WRITE *write, PSID sid, LPC_SECTION_READ *read, ULONG *max_len, void *info, ULONG *info_len ); // sync.c / winternl.h
NTSTATUS SYSCALL_API NtSetContextThread( HANDLE handle, const CONTEXT *context ); // signal_arm.c / signal_arm64.c / signal_arm64ec.c / signal_i386.c / signal_x86_64.c / winternl.h
NTSTATUS WINAPI NtSetDebugFilterState( ULONG component_id, ULONG level, BOOLEAN state ); // debug.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtSetDefaultHardErrorPort(HANDLE); // winternl.h
NTSTATUS WINAPI NtSetDefaultLocale( BOOLEAN user, LCID lcid ); // env.c / winternl.h
NTSTATUS WINAPI NtSetDefaultUILanguage( LANGID lang ); // env.c / winternl.h
NTSTATUS WINAPI NtSetEaFile( HANDLE handle, IO_STATUS_BLOCK *io, void *buffer, ULONG length ); // file.c / winternl.h
NTSTATUS WINAPI NtSetEvent( HANDLE handle, LONG *prev_state ); // sync.c / winternl.h
NTSTATUS WINAPI NtSetEventBoostPriority( HANDLE handle ); // sync.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtSetHighEventPair(HANDLE); // winternl.h
NTSYSAPI NTSTATUS WINAPI NtSetHighWaitLowEventPair(HANDLE); // winternl.h
NTSYSAPI NTSTATUS WINAPI NtSetHighWaitLowThread(VOID); // winternl.h
NTSTATUS WINAPI NtSetInformationDebugObject( HANDLE handle, DEBUGOBJECTINFOCLASS class, void *info, ULONG len, ULONG *ret_len ); // sync.c / winternl.h
NTSTATUS WINAPI NtSetInformationFile( HANDLE handle, IO_STATUS_BLOCK *io, void *ptr, ULONG len, FILE_INFORMATION_CLASS class ); // file.c / winternl.h
NTSTATUS WINAPI NtSetInformationJobObject( HANDLE handle, JOBOBJECTINFOCLASS class, void *info, ULONG len ); // sync.c / winternl.h
NTSTATUS WINAPI NtSetInformationKey( HANDLE key, int class, void *info, ULONG length ); // registry.c / winternl.h
NTSTATUS WINAPI NtSetInformationObject( HANDLE handle, OBJECT_INFORMATION_CLASS info_class, void *ptr, ULONG len ); // file.c / winternl.h
NTSTATUS WINAPI NtSetInformationProcess( HANDLE handle, PROCESSINFOCLASS class, void *info, ULONG size ); // process.c / winternl.h
NTSTATUS WINAPI NtSetInformationThread( HANDLE handle, THREADINFOCLASS class, const void *data, ULONG length ); // thread.c / winternl.h
NTSTATUS WINAPI NtSetInformationToken( HANDLE token, TOKEN_INFORMATION_CLASS class, void *info, ULONG length ); // security.c / winternl.h
NTSTATUS WINAPI NtSetInformationVirtualMemory( HANDLE process, VIRTUAL_MEMORY_INFORMATION_CLASS info_class, ULONG_PTR count, PMEMORY_RANGE_ENTRY addresses, PVOID ptr, ULONG size ); // virtual.c / winternl.h
NTSTATUS WINAPI NtSetIntervalProfile( ULONG interval, KPROFILE_SOURCE source ); // sync.c / winternl.h
NTSTATUS WINAPI NtSetIoCompletion( HANDLE handle, ULONG_PTR key, ULONG_PTR value, NTSTATUS status, SIZE_T count ); // sync.c / winternl.h
NTSTATUS WINAPI NtSetIoCompletionEx( HANDLE completion_handle, HANDLE completion_reserve_handle, ULONG_PTR key, ULONG_PTR value, NTSTATUS status, SIZE_T count ); // sync.c / winternl.h
NTSTATUS WINAPI NtSetLdtEntries( ULONG sel1, LDT_ENTRY entry1, ULONG sel2, LDT_ENTRY entry2 ); // virtual.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtSetLowEventPair(HANDLE); // winternl.h
NTSYSAPI NTSTATUS WINAPI NtSetLowWaitHighEventPair(HANDLE); // winternl.h
NTSYSAPI NTSTATUS WINAPI NtSetLowWaitHighThread(VOID); // winternl.h
NTSTATUS WINAPI NtSetSecurityObject( HANDLE handle, SECURITY_INFORMATION info, PSECURITY_DESCRIPTOR descr ); // security.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtSetSystemEnvironmentValue(PUNICODE_STRING,PUNICODE_STRING); // winternl.h
NTSTATUS WINAPI NtSetSystemInformation( SYSTEM_INFORMATION_CLASS class, void *info, ULONG length ); // system.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtSetSystemPowerState(POWER_ACTION,SYSTEM_POWER_STATE,ULONG); // winternl.h
NTSTATUS WINAPI NtSetSystemTime( const LARGE_INTEGER *new, LARGE_INTEGER *old ); // sync.c / winternl.h
NTSTATUS WINAPI NtSetThreadExecutionState( EXECUTION_STATE new_state, EXECUTION_STATE *old_state ); // system.c / winternl.h
NTSTATUS WINAPI NtSetTimer( HANDLE handle, const LARGE_INTEGER *when, PTIMER_APC_ROUTINE callback, void *arg, BOOLEAN resume, ULONG period, BOOLEAN *state ); // sync.c / winternl.h
NTSTATUS WINAPI NtSetTimerResolution( ULONG res, BOOLEAN set, ULONG *current_res ); // sync.c / winternl.h
NTSTATUS WINAPI NtSetValueKey( HANDLE key, const UNICODE_STRING *name, ULONG index, ULONG type, const void *data, ULONG count ); // registry.c / winternl.h
NTSTATUS WINAPI NtSetVolumeInformationFile( HANDLE handle, IO_STATUS_BLOCK *io, void *info, ULONG length, FS_INFORMATION_CLASS class ); // file.c / winternl.h
NTSTATUS WINAPI NtShutdownSystem( SHUTDOWN_ACTION action ); // system.c / winternl.h
NTSTATUS WINAPI NtSignalAndWaitForSingleObject( HANDLE signal, HANDLE wait, BOOLEAN alertable, const LARGE_INTEGER *timeout ); // sync.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtStartProfile(HANDLE); // winternl.h
NTSYSAPI NTSTATUS WINAPI NtStopProfile(HANDLE); // winternl.h
NTSTATUS WINAPI NtSuspendProcess( HANDLE handle ); // process.c / winternl.h
NTSTATUS WINAPI NtSuspendThread( HANDLE handle, ULONG *ret_count ); // thread.c / winternl.h
NTSTATUS WINAPI NtSystemDebugControl( SYSDBG_COMMAND command, void *in_buff, ULONG in_len, void *out_buff, ULONG out_len, ULONG *retlen ); // system.c / winternl.h
NTSTATUS WINAPI NtTerminateJobObject( HANDLE handle, NTSTATUS status ); // sync.c / winternl.h
NTSTATUS SYSCALL_API NtTerminateProcess( HANDLE handle, LONG exit_code ); // process.c / signal_arm64ec.c / winternl.h
NTSTATUS SYSCALL_API NtTerminateThread( HANDLE handle, LONG exit_code ); // signal_arm64ec.c / thread.c / winternl.h
NTSTATUS WINAPI NtTestAlert(void); // server.c / winternl.h
NTSTATUS WINAPI NtTraceControl( ULONG code, void *inbuf, ULONG inbuf_len, void *outbuf, ULONG outbuf_len, ULONG *size ); // debug.c / winternl.h
NTSTATUS WINAPI NtUnloadDriver( const UNICODE_STRING *name ); // system.c / winternl.h
NTSTATUS WINAPI NtUnloadKey( OBJECT_ATTRIBUTES *attr ); // registry.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtUnloadKeyEx(POBJECT_ATTRIBUTES,HANDLE); // winternl.h
NTSTATUS WINAPI NtUnlockFile( HANDLE handle, IO_STATUS_BLOCK *io_status, LARGE_INTEGER *offset, LARGE_INTEGER *count, ULONG *key ); // file.c / winternl.h
NTSTATUS WINAPI NtUnlockVirtualMemory( HANDLE process, PVOID *addr, SIZE_T *size, ULONG unknown ); // virtual.c / winternl.h
NTSTATUS SYSCALL_API NtUnmapViewOfSection( HANDLE process, void *addr ); // signal_arm64ec.c / virtual.c / winternl.h
NTSTATUS SYSCALL_API NtUnmapViewOfSectionEx( HANDLE process, void *addr, ULONG flags ); // signal_arm64ec.c / virtual.c / winternl.h
HKL SYSCALL_API NtUserActivateKeyboardLayout( HKL layout, UINT flags ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserAddClipboardFormatListener( HWND hwnd ); // clipboard.c / main.c / ntuser.h
ULONG SYSCALL_API NtUserAlterWindowStyle( HWND hwnd, UINT mask, UINT style ); // main.c / ntuser.h / window.c
UINT SYSCALL_API NtUserArrangeIconicWindows( HWND parent ); // main.c / ntuser.h / window.c
UINT SYSCALL_API NtUserAssociateInputContext( HWND hwnd, HIMC ctx, ULONG flags ); // imm.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserAttachThreadInput( DWORD from, DWORD to, BOOL attach ); // input.c / main.c / ntuser.h
HDWP SYSCALL_API NtUserBeginDeferWindowPos( INT count ); // main.c / ntuser.h / window.c
HDC SYSCALL_API NtUserBeginPaint( HWND hwnd, PAINTSTRUCT *ps ); // dce.c / main.c / ntuser.h
NTSTATUS SYSCALL_API NtUserBuildHimcList( UINT thread_id, UINT count, HIMC *buffer, UINT *size ); // imm.c / main.c / ntuser.h
NTSTATUS SYSCALL_API NtUserBuildHwndList( HDESK desktop, HWND hwnd, BOOL children, BOOL non_immersive, ULONG thread_id, ULONG count, HWND *buffer, ULONG *size ); // main.c / ntuser.h / window.c
NTSTATUS SYSCALL_API NtUserBuildNameList( HWINSTA winsta, ULONG size, struct ntuser_name_list *buffer, ULONG *ret_size ); // main.c / ntuser.h / winstation.c
NTSTATUS SYSCALL_API NtUserBuildPropList( HWND hwnd, ULONG count, struct ntuser_property_list *buffer, ULONG *ret_count ); // main.c / ntuser.h / window.c
ULONG_PTR SYSCALL_API NtUserCallHwnd( HWND hwnd, DWORD code ); // main.c / ntuser.h / window.c
ULONG_PTR SYSCALL_API NtUserCallHwndParam( HWND hwnd, DWORD_PTR param, DWORD code ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserCallMsgFilter( MSG *msg, INT code ); // hook.c / main.c / ntuser.h
LRESULT SYSCALL_API NtUserCallNextHookEx( HHOOK hhook, INT code, WPARAM wparam, LPARAM lparam ); // hook.c / main.c / ntuser.h
ULONG_PTR SYSCALL_API NtUserCallNoParam( ULONG code ); // main.c / ntuser.h / sysparams.c
ULONG_PTR SYSCALL_API NtUserCallOneParam( ULONG_PTR arg, ULONG code ); // main.c / ntuser.h / sysparams.c
ULONG_PTR SYSCALL_API NtUserCallTwoParam( ULONG_PTR arg1, ULONG_PTR arg2, ULONG code ); // main.c / ntuser.h / sysparams.c
BOOL SYSCALL_API NtUserChangeClipboardChain( HWND hwnd, HWND next ); // clipboard.c / main.c / ntuser.h
LONG SYSCALL_API NtUserChangeDisplaySettings( UNICODE_STRING *devname, DEVMODEW *devmode, HWND hwnd, DWORD flags, void *lparam ); // main.c / ntuser.h / sysparams.c
DWORD SYSCALL_API NtUserCheckMenuItem( HMENU handle, UINT id, UINT flags ); // main.c / menu.c / ntuser.h
HWND SYSCALL_API NtUserChildWindowFromPointEx( HWND parent, LONG x, LONG y, UINT flags ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserClipCursor( const RECT *rect ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserCloseClipboard(void); // clipboard.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserCloseDesktop( HDESK handle ); // main.c / ntuser.h / winstation.c
BOOL SYSCALL_API NtUserCloseWindowStation( HWINSTA handle ); // main.c / ntuser.h / winstation.c
INT SYSCALL_API NtUserCopyAcceleratorTable( HACCEL src, ACCEL *dst, INT count ); // main.c / menu.c / ntuser.h
INT SYSCALL_API NtUserCountClipboardFormats(void); // clipboard.c / main.c / ntuser.h
HACCEL SYSCALL_API NtUserCreateAcceleratorTable( ACCEL *table, INT count ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserCreateCaret( HWND hwnd, HBITMAP bitmap, int width, int height ); // input.c / main.c / ntuser.h
HDESK SYSCALL_API NtUserCreateDesktopEx( OBJECT_ATTRIBUTES *attr, UNICODE_STRING *device, DEVMODEW *devmode, DWORD flags, ACCESS_MASK access, ULONG heap_size ); // main.c / ntuser.h / winstation.c
HIMC SYSCALL_API NtUserCreateInputContext( UINT_PTR client_ptr ); // imm.c / main.c / ntuser.h
HMENU SYSCALL_API NtUserCreateMenu(void); // main.c / menu.c / ntuser.h
HMENU SYSCALL_API NtUserCreatePopupMenu(void); // main.c / menu.c / ntuser.h
HWND SYSCALL_API NtUserCreateWindowEx( DWORD ex_style, UNICODE_STRING *class_name, UNICODE_STRING *version, UNICODE_STRING *window_name, DWORD style, INT x, INT y, INT cx, INT cy, HWND parent, HMENU menu, HINSTANCE instance, void *params, DWORD flags, HINSTANCE client_instance, const WCHAR *class, BOOL ansi ); // main.c / ntuser.h / window.c
HWINSTA SYSCALL_API NtUserCreateWindowStation( OBJECT_ATTRIBUTES *attr, ACCESS_MASK access, ULONG arg3, ULONG arg4, ULONG arg5, ULONG arg6, ULONG arg7 ); // main.c / ntuser.h / winstation.c
HDWP SYSCALL_API NtUserDeferWindowPosAndBand( HDWP hdwp, HWND hwnd, HWND after, INT x, INT y, INT cx, INT cy, UINT flags, UINT unk1, UINT unk2 ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserDeleteMenu( HMENU handle, UINT id, UINT flags ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserDestroyAcceleratorTable( HACCEL handle ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserDestroyCaret(void); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserDestroyCursor( HCURSOR cursor, ULONG arg ); // cursoricon.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserDestroyInputContext( HIMC handle ); // imm.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserDestroyMenu( HMENU handle ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserDestroyWindow( HWND hwnd ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserDisableThreadIme( DWORD thread_id ); // imm.c / main.c / ntuser.h
LRESULT SYSCALL_API NtUserDispatchMessage( const MSG *msg ); // main.c / message.c / ntuser.h
NTSTATUS SYSCALL_API NtUserDisplayConfigGetDeviceInfo( DISPLAYCONFIG_DEVICE_INFO_HEADER *packet ); // main.c / ntuser.h / sysparams.c
BOOL SYSCALL_API NtUserDragDetect( HWND hwnd, int x, int y ); // main.c / ntuser.h / window.c
DWORD SYSCALL_API NtUserDragObject( HWND parent, HWND hwnd, UINT fmt, ULONG_PTR data, HCURSOR cursor ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserDrawCaptionTemp( HWND hwnd, HDC hdc, const RECT *rect, HFONT font, HICON icon, const WCHAR *str, UINT flags ); // defwnd.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserDrawIconEx( HDC hdc, INT x0, INT y0, HICON icon, INT width, INT height, UINT step, HBRUSH brush, UINT flags ); // cursoricon.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserDrawMenuBar( HWND hwnd ); // main.c / menu.c / ntuser.h
DWORD SYSCALL_API NtUserDrawMenuBarTemp( HWND hwnd, HDC hdc, RECT *rect, HMENU handle, HFONT font ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserEmptyClipboard(void); // clipboard.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserEnableMenuItem( HMENU handle, UINT id, UINT flags ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserEnableMouseInPointer( BOOL enable ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserEnableMouseInPointerForThread(void); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserEnableScrollBar( HWND hwnd, UINT bar, UINT flags ); // main.c / ntuser.h / scroll.c
BOOL SYSCALL_API NtUserEnableWindow( HWND hwnd, BOOL enable ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserEndDeferWindowPosEx( HDWP hdwp, BOOL async ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserEndMenu(void); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserEndPaint( HWND hwnd, const PAINTSTRUCT *ps ); // dce.c / main.c / ntuser.h
UINT SYSCALL_API NtUserEnumClipboardFormats( UINT format ); // clipboard.c / main.c / ntuser.h
NTSTATUS SYSCALL_API NtUserEnumDisplayDevices( UNICODE_STRING *device, DWORD index, DISPLAY_DEVICEW *info, DWORD flags ); // main.c / ntuser.h / sysparams.c
BOOL SYSCALL_API NtUserEnumDisplayMonitors( HDC hdc, RECT *rect, MONITORENUMPROC proc, LPARAM lparam ); // main.c / ntuser.h / sysparams.c
BOOL SYSCALL_API NtUserEnumDisplaySettings( UNICODE_STRING *device, DWORD index, DEVMODEW *devmode, DWORD flags ); // main.c / ntuser.h / sysparams.c
INT SYSCALL_API NtUserExcludeUpdateRgn( HDC hdc, HWND hwnd ); // dce.c / main.c / ntuser.h
HICON SYSCALL_API NtUserFindExistingCursorIcon( UNICODE_STRING *module, UNICODE_STRING *res_name, void *desc ); // cursoricon.c / main.c / ntuser.h
HWND SYSCALL_API NtUserFindWindowEx( HWND parent, HWND child, UNICODE_STRING *class, UNICODE_STRING *title, ULONG unk ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserFlashWindowEx( FLASHWINFO *info ); // main.c / ntuser.h / window.c
HWND SYSCALL_API NtUserGetAncestor( HWND hwnd, UINT type ); // main.c / ntuser.h / window.c
SHORT SYSCALL_API NtUserGetAsyncKeyState( INT key ); // input.c / main.c / ntuser.h
ULONG SYSCALL_API NtUserGetAtomName( ATOM atom, UNICODE_STRING *name ); // class.c / main.c / ntuser.h
UINT SYSCALL_API NtUserGetCaretBlinkTime(void); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetCaretPos( POINT *pt ); // input.c / main.c / ntuser.h
ATOM SYSCALL_API NtUserGetClassInfoEx( HINSTANCE instance, UNICODE_STRING *name, WNDCLASSEXW *wc, struct client_menu_name *menu_name, BOOL ansi ); // class.c / main.c / ntuser.h
INT SYSCALL_API NtUserGetClassName( HWND hwnd, BOOL real, UNICODE_STRING *name ); // class.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetClipCursor( RECT *rect ); // input.c / main.c / ntuser.h
HANDLE SYSCALL_API NtUserGetClipboardData( UINT format, struct get_clipboard_params *params ); // clipboard.c / main.c / ntuser.h
INT SYSCALL_API NtUserGetClipboardFormatName( UINT format, WCHAR *buffer, INT maxlen ); // clipboard.c / main.c / ntuser.h
HWND SYSCALL_API NtUserGetClipboardOwner(void); // clipboard.c / main.c / ntuser.h
DWORD SYSCALL_API NtUserGetClipboardSequenceNumber(void); // clipboard.c / main.c / ntuser.h
HWND SYSCALL_API NtUserGetClipboardViewer(void); // clipboard.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetCurrentInputMessageSource( INPUT_MESSAGE_SOURCE *source ); // main.c / message.c / ntuser.h
HCURSOR SYSCALL_API NtUserGetCursor(void); // cursoricon.c / main.c / ntuser.h
HCURSOR SYSCALL_API NtUserGetCursorFrameInfo( HCURSOR cursor, DWORD istep, DWORD *rate_jiffies, DWORD *num_steps ); // cursoricon.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetCursorInfo( CURSORINFO *info ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetCursorPos( POINT *pt ); // input.c / main.c / ntuser.h
HDC SYSCALL_API NtUserGetDC( HWND hwnd ); // dce.c / main.c / ntuser.h
HDC SYSCALL_API NtUserGetDCEx( HWND hwnd, HRGN clip_rgn, DWORD flags ); // dce.c / main.c / ntuser.h
LONG SYSCALL_API NtUserGetDisplayConfigBufferSizes( UINT32 flags, UINT32 *num_path_info, UINT32 *num_mode_info ); // main.c / ntuser.h / sysparams.c
UINT SYSCALL_API NtUserGetDoubleClickTime(void); // main.c / ntuser.h / sysparams.c
BOOL SYSCALL_API NtUserGetDpiForMonitor( HMONITOR monitor, UINT type, UINT *x, UINT *y ); // main.c / ntuser.h / sysparams.c
HWND SYSCALL_API NtUserGetForegroundWindow(void); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetGUIThreadInfo( DWORD id, GUITHREADINFO *info ); // main.c / message.c / ntuser.h
BOOL SYSCALL_API NtUserGetIconInfo( HICON icon, ICONINFO *info, UNICODE_STRING *module, UNICODE_STRING *res_name, DWORD *bpp, LONG unk ); // cursoricon.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetIconSize( HICON handle, UINT step, LONG *width, LONG *height ); // cursoricon.c / main.c / ntuser.h
UINT SYSCALL_API NtUserGetInternalWindowPos( HWND hwnd, RECT *rect, POINT *pt ); // main.c / ntuser.h / window.c
INT SYSCALL_API NtUserGetKeyNameText( LONG lparam, WCHAR *buffer, INT size ); // input.c / main.c / ntuser.h
SHORT SYSCALL_API NtUserGetKeyState( INT vkey ); // input.c / main.c / ntuser.h
HKL SYSCALL_API NtUserGetKeyboardLayout( DWORD thread_id ); // input.c / main.c / ntuser.h
UINT SYSCALL_API NtUserGetKeyboardLayoutList( INT size, HKL *layouts ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetKeyboardLayoutName( WCHAR *name ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetKeyboardState( BYTE *state ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetLayeredWindowAttributes( HWND hwnd, COLORREF *key, BYTE *alpha, DWORD *flags ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserGetMenuBarInfo( HWND hwnd, LONG id, LONG item, MENUBARINFO *info ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserGetMenuItemRect( HWND hwnd, HMENU handle, UINT item, RECT *rect ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserGetMessage( MSG *msg, HWND hwnd, UINT first, UINT last ); // main.c / message.c / ntuser.h
W32KAPI int WINAPI NtUserGetMouseMovePointsEx( UINT size, MOUSEMOVEPOINT *ptin, MOUSEMOVEPOINT *ptout, int count, DWORD resolution ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetObjectInformation( HANDLE handle, INT index, void *info, DWORD len, DWORD *needed ); // main.c / ntuser.h / winstation.c
HWND SYSCALL_API NtUserGetOpenClipboardWindow(void); // clipboard.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetPointerInfoList( UINT32 id, POINTER_INPUT_TYPE type, UINT_PTR unk0, UINT_PTR unk1, SIZE_T size, UINT32 *entry_count, UINT32 *pointer_count, void *pointer_info ); // input.c / main.c / ntuser.h
INT SYSCALL_API NtUserGetPriorityClipboardFormat( UINT *list, INT count ); // clipboard.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetProcessDefaultLayout( ULONG *layout ); // main.c / ntuser.h / sysparams.c
ULONG SYSCALL_API NtUserGetProcessDpiAwarenessContext( HANDLE process ); // main.c / ntuser.h / sysparams.c
HWINSTA SYSCALL_API NtUserGetProcessWindowStation(void); // main.c / ntuser.h / winstation.c
HANDLE SYSCALL_API NtUserGetProp( HWND hwnd, const WCHAR *str ); // main.c / ntuser.h / window.c
DWORD SYSCALL_API NtUserGetQueueStatus( UINT flags ); // input.c / main.c / ntuser.h
UINT SYSCALL_API NtUserGetRawInputBuffer( RAWINPUT *data, UINT *data_size, UINT header_size ); // main.c / ntuser.h / rawinput.c
UINT SYSCALL_API NtUserGetRawInputData( HRAWINPUT rawinput, UINT command, void *data, UINT *data_size, UINT header_size ); // main.c / ntuser.h / rawinput.c
UINT SYSCALL_API NtUserGetRawInputDeviceInfo( HANDLE handle, UINT command, void *data, UINT *data_size ); // main.c / ntuser.h / rawinput.c
UINT SYSCALL_API NtUserGetRawInputDeviceList( RAWINPUTDEVICELIST *device_list, UINT *device_count, UINT size ); // main.c / ntuser.h / rawinput.c
UINT SYSCALL_API NtUserGetRegisteredRawInputDevices( RAWINPUTDEVICE *devices, UINT *device_count, UINT device_size ); // main.c / ntuser.h / rawinput.c
BOOL SYSCALL_API NtUserGetScrollBarInfo( HWND hwnd, LONG id, SCROLLBARINFO *info ); // main.c / ntuser.h / scroll.c
ULONG SYSCALL_API NtUserGetSystemDpiForProcess( HANDLE process ); // main.c / ntuser.h / sysparams.c
HMENU SYSCALL_API NtUserGetSystemMenu( HWND hwnd, BOOL revert ); // main.c / menu.c / ntuser.h
HDESK SYSCALL_API NtUserGetThreadDesktop( DWORD thread ); // main.c / ntuser.h / winstation.c
ULONG_PTR SYSCALL_API NtUserGetThreadState( USERTHREADSTATECLASS cls ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetTitleBarInfo( HWND hwnd, TITLEBARINFO *info ); // defwnd.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetTouchInputInfo( HTOUCHINPUT handle, UINT count, TOUCHINPUT *ptr, int size ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetUpdateRect( HWND hwnd, RECT *rect, BOOL erase ); // dce.c / main.c / ntuser.h
INT SYSCALL_API NtUserGetUpdateRgn( HWND hwnd, HRGN hrgn, BOOL erase ); // dce.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetUpdatedClipboardFormats( UINT *formats, UINT size, UINT *out_size ); // clipboard.c / main.c / ntuser.h
DWORD SYSCALL_API NtUserGetWindowContextHelpId( HWND hwnd ); // main.c / ntuser.h / window.c
HDC SYSCALL_API NtUserGetWindowDC( HWND hwnd ); // dce.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserGetWindowDisplayAffinity( HWND hwnd, DWORD *affinity ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserGetWindowPlacement( HWND hwnd, WINDOWPLACEMENT *placement ); // main.c / ntuser.h / window.c
W32KAPI int WINAPI NtUserGetWindowRgnEx( HWND hwnd, HRGN hrgn, UINT unk ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserHideCaret( HWND hwnd ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserHiliteMenuItem( HWND hwnd, HMENU handle, UINT item, UINT hilite ); // main.c / menu.c / ntuser.h
NTSTATUS SYSCALL_API NtUserInitializeClientPfnArrays( const ntuser_client_func_ptr *client_procsA, const ntuser_client_func_ptr *client_procsW, const ntuser_client_func_ptr *client_workers, HINSTANCE user_module ); // class.c / main.c / ntuser.h
HICON SYSCALL_API NtUserInternalGetWindowIcon( HWND hwnd, UINT type ); // main.c / ntuser.h / window.c
INT SYSCALL_API NtUserInternalGetWindowText( HWND hwnd, WCHAR *text, INT count ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserInvalidateRect( HWND hwnd, const RECT *rect, BOOL erase ); // dce.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserInvalidateRgn( HWND hwnd, HRGN hrgn, BOOL erase ); // dce.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserIsChildWindowDpiMessageEnabled( HWND hwnd ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserIsClipboardFormatAvailable( UINT format ); // clipboard.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserIsMouseInPointerEnabled(void); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserIsTouchWindow( HWND hwnd, ULONG *flags ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserKillSystemTimer( HWND hwnd, UINT_PTR id ); // main.c / message.c / ntuser.h
BOOL SYSCALL_API NtUserKillTimer( HWND hwnd, UINT_PTR id ); // main.c / message.c / ntuser.h
BOOL SYSCALL_API NtUserLockWindowUpdate( HWND hwnd ); // dce.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserLogicalToPerMonitorDPIPhysicalPoint( HWND hwnd, POINT *pt ); // main.c / ntuser.h / sysparams.c
UINT SYSCALL_API NtUserMapVirtualKeyEx( UINT code, UINT type, HKL layout ); // input.c / main.c / ntuser.h
INT SYSCALL_API NtUserMenuItemFromPoint( HWND hwnd, HMENU handle, int x, int y ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserMessageBeep( UINT type ); // main.c / ntuser.h / sysparams.c
LRESULT SYSCALL_API NtUserMessageCall( HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam, void *result_info, DWORD type, BOOL ansi ); // main.c / message.c / ntuser.h
BOOL SYSCALL_API NtUserModifyUserStartupInfoFlags( DWORD mask, DWORD flags ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserMoveWindow( HWND hwnd, INT x, INT y, INT cx, INT cy, BOOL repaint ); // main.c / ntuser.h / window.c
DWORD SYSCALL_API NtUserMsgWaitForMultipleObjectsEx( DWORD count, const HANDLE *handles, DWORD timeout, DWORD mask, DWORD flags ); // main.c / message.c / ntuser.h
W32KAPI void WINAPI NtUserNotifyIMEStatus( HWND hwnd, UINT status ); // imm.c / main.c / ntuser.h
W32KAPI void WINAPI NtUserNotifyWinEvent( DWORD event, HWND hwnd, LONG object_id, LONG child_id ); // hook.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserOpenClipboard( HWND hwnd, ULONG unk ); // clipboard.c / main.c / ntuser.h
HDESK SYSCALL_API NtUserOpenDesktop( OBJECT_ATTRIBUTES *attr, DWORD flags, ACCESS_MASK access ); // main.c / ntuser.h / winstation.c
HDESK SYSCALL_API NtUserOpenInputDesktop( DWORD flags, BOOL inherit, ACCESS_MASK access ); // main.c / ntuser.h / winstation.c
HWINSTA SYSCALL_API NtUserOpenWindowStation( OBJECT_ATTRIBUTES *attr, ACCESS_MASK access ); // main.c / ntuser.h / winstation.c
BOOL SYSCALL_API NtUserPeekMessage( MSG *msg_out, HWND hwnd, UINT first, UINT last, UINT flags ); // main.c / message.c / ntuser.h
BOOL SYSCALL_API NtUserPerMonitorDPIPhysicalToLogicalPoint( HWND hwnd, POINT *pt ); // main.c / ntuser.h / sysparams.c
BOOL SYSCALL_API NtUserPostMessage( HWND hwnd, UINT msg, WPARAM wparam, LPARAM lparam ); // main.c / message.c / ntuser.h
BOOL SYSCALL_API NtUserPostQuitMessage( INT exit_code ); // main.c / message.c / ntuser.h
BOOL SYSCALL_API NtUserPostThreadMessage( DWORD thread, UINT msg, WPARAM wparam, LPARAM lparam ); // main.c / message.c / ntuser.h
BOOL SYSCALL_API NtUserPrintWindow( HWND hwnd, HDC hdc, UINT flags ); // dce.c / main.c / ntuser.h
LONG SYSCALL_API NtUserQueryDisplayConfig( UINT32 flags, UINT32 *paths_count, DISPLAYCONFIG_PATH_INFO *paths, UINT32 *modes_count, DISPLAYCONFIG_MODE_INFO *modes, DISPLAYCONFIG_TOPOLOGY_ID *topology_id ); // main.c / ntuser.h / sysparams.c
UINT_PTR SYSCALL_API NtUserQueryInputContext( HIMC handle, UINT attr ); // imm.c / main.c / ntuser.h
HANDLE SYSCALL_API NtUserQueryWindow( HWND hwnd, WINDOWINFOCLASS cls ); // main.c / ntuser.h / window.c
HWND SYSCALL_API NtUserRealChildWindowFromPoint( HWND parent, LONG x, LONG y ); // main.c / ntuser.h / window.c
UINT SYSCALL_API NtUserRealizePalette( HDC hdc ); // main.c / ntuser.h / palette.c
BOOL SYSCALL_API NtUserRedrawWindow( HWND hwnd, const RECT *rect, HRGN hrgn, UINT flags ); // dce.c / main.c / ntuser.h
ATOM SYSCALL_API NtUserRegisterClassExWOW( const WNDCLASSEXW *wc, UNICODE_STRING *name, UNICODE_STRING *version, struct client_menu_name *client_menu_name, DWORD fnid, DWORD flags, DWORD *wow ); // class.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserRegisterHotKey( HWND hwnd, INT id, UINT modifiers, UINT vk ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserRegisterRawInputDevices( const RAWINPUTDEVICE *devices, UINT device_count, UINT device_size ); // main.c / ntuser.h / rawinput.c
BOOL SYSCALL_API NtUserRegisterTouchPadCapable( BOOL capable ); // input.c / main.c / ntuser.h
ATOM SYSCALL_API NtUserRegisterWindowMessage( UNICODE_STRING *name ); // class.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserReleaseCapture(void); // input.c / main.c / ntuser.h
INT SYSCALL_API NtUserReleaseDC( HWND hwnd, HDC hdc ); // dce.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserRemoveClipboardFormatListener( HWND hwnd ); // clipboard.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserRemoveMenu( HMENU handle, UINT id, UINT flags ); // main.c / menu.c / ntuser.h
HANDLE SYSCALL_API NtUserRemoveProp( HWND hwnd, const WCHAR *str ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserReplyMessage( LRESULT result ); // main.c / message.c / ntuser.h
INT SYSCALL_API NtUserScheduleDispatchNotification( HWND hwnd ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserScrollDC( HDC hdc, INT dx, INT dy, const RECT *scroll, const RECT *clip, HRGN ret_update_rgn, RECT *update_rect ); // main.c / ntuser.h / painting.c
INT SYSCALL_API NtUserScrollWindowEx( HWND hwnd, INT dx, INT dy, const RECT *rect, const RECT *clip_rect, HRGN update_rgn, RECT *update_rect, UINT flags ); // dce.c / main.c / ntuser.h
HPALETTE SYSCALL_API NtUserSelectPalette( HDC hdc, HPALETTE hpal, WORD bkg ); // main.c / ntuser.h / palette.c
UINT SYSCALL_API NtUserSendInput( UINT count, INPUT *inputs, int size ); // input.c / main.c / ntuser.h
HWND SYSCALL_API NtUserSetActiveWindow( HWND hwnd ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserSetAdditionalForegroundBoostProcesses( HWND hwnd, DWORD count, HANDLE *handles ); // main.c / ntuser.h / sysparams.c
HWND SYSCALL_API NtUserSetCapture( HWND hwnd ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserSetCaretBlinkTime( unsigned int time ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserSetCaretPos( INT x, INT y ); // input.c / main.c / ntuser.h
DWORD SYSCALL_API NtUserSetClassLong( HWND hwnd, INT offset, LONG newval, BOOL ansi ); // class.c / main.c / ntuser.h
ULONG_PTR SYSCALL_API NtUserSetClassLongPtr( HWND hwnd, INT offset, LONG_PTR newval, BOOL ansi ); // class.c / main.c / ntuser.h
W32KAPI WORD WINAPI NtUserSetClassWord( HWND hwnd, INT offset, WORD newval ); // class.c / main.c / ntuser.h
NTSTATUS SYSCALL_API NtUserSetClipboardData( UINT format, HANDLE data, struct set_clipboard_params *params ); // clipboard.c / main.c / ntuser.h
HWND SYSCALL_API NtUserSetClipboardViewer( HWND hwnd ); // clipboard.c / main.c / ntuser.h
HCURSOR SYSCALL_API NtUserSetCursor( HCURSOR cursor ); // cursoricon.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserSetCursorIconData( HCURSOR cursor, UNICODE_STRING *module, UNICODE_STRING *res_name, struct cursoricon_desc *desc ); // cursoricon.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserSetCursorPos( INT x, INT y ); // input.c / main.c / ntuser.h
HWND SYSCALL_API NtUserSetFocus( HWND hwnd ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserSetForegroundWindow( HWND hwnd ); // input.c / main.c / ntuser.h
W32KAPI void WINAPI NtUserSetInternalWindowPos( HWND hwnd, UINT cmd, RECT *rect, POINT *pt ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserSetKeyboardState( BYTE *state ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserSetLayeredWindowAttributes( HWND hwnd, COLORREF key, BYTE alpha, DWORD flags ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserSetMenu( HWND hwnd, HMENU menu ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserSetMenuContextHelpId( HMENU handle, DWORD id ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserSetMenuDefaultItem( HMENU handle, UINT item, UINT bypos ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserSetObjectInformation( HANDLE handle, INT index, void *info, DWORD len ); // main.c / ntuser.h / winstation.c
HWND SYSCALL_API NtUserSetParent( HWND hwnd, HWND parent ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserSetProcessDefaultLayout( ULONG layout ); // main.c / ntuser.h / sysparams.c
BOOL SYSCALL_API NtUserSetProcessDpiAwarenessContext( ULONG awareness, ULONG unknown ); // main.c / ntuser.h / sysparams.c
BOOL SYSCALL_API NtUserSetProcessWindowStation( HWINSTA handle ); // main.c / ntuser.h / winstation.c
HWND SYSCALL_API NtUserSetProgmanWindow( HWND hwnd ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserSetProp( HWND hwnd, const WCHAR *str, HANDLE handle ); // main.c / ntuser.h / window.c
INT SYSCALL_API NtUserSetScrollInfo( HWND hwnd, int bar, const SCROLLINFO *info, BOOL redraw ); // main.c / ntuser.h / scroll.c
BOOL SYSCALL_API NtUserSetShellWindowEx( HWND shell, HWND list_view ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserSetSysColors( INT count, const INT *colors, const COLORREF *values ); // main.c / ntuser.h / sysparams.c
BOOL SYSCALL_API NtUserSetSystemMenu( HWND hwnd, HMENU menu ); // main.c / menu.c / ntuser.h
UINT_PTR SYSCALL_API NtUserSetSystemTimer( HWND hwnd, UINT_PTR id, UINT timeout ); // main.c / message.c / ntuser.h
HWND SYSCALL_API NtUserSetTaskmanWindow( HWND hwnd ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserSetThreadDesktop( HDESK handle ); // main.c / ntuser.h / winstation.c
UINT_PTR SYSCALL_API NtUserSetTimer( HWND hwnd, UINT_PTR id, UINT timeout, TIMERPROC proc, ULONG tolerance ); // main.c / message.c / ntuser.h
HWINEVENTHOOK SYSCALL_API NtUserSetWinEventHook( DWORD event_min, DWORD event_max, HMODULE inst, UNICODE_STRING *module, WINEVENTPROC proc, DWORD pid, DWORD tid, DWORD flags ); // hook.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserSetWindowContextHelpId( HWND hwnd, DWORD id ); // main.c / ntuser.h / window.c
LONG SYSCALL_API NtUserSetWindowLong( HWND hwnd, INT offset, LONG newval, BOOL ansi ); // main.c / ntuser.h / window.c
LONG_PTR SYSCALL_API NtUserSetWindowLongPtr( HWND hwnd, INT offset, LONG_PTR newval, BOOL ansi ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserSetWindowPlacement( HWND hwnd, const WINDOWPLACEMENT *wpl ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserSetWindowPos( HWND hwnd, HWND after, INT x, INT y, INT cx, INT cy, UINT flags ); // main.c / ntuser.h / window.c
W32KAPI int WINAPI NtUserSetWindowRgn( HWND hwnd, HRGN hrgn, BOOL redraw ); // main.c / ntuser.h / window.c
W32KAPI WORD WINAPI NtUserSetWindowWord( HWND hwnd, INT offset, WORD newval ); // main.c / ntuser.h / window.c
HHOOK SYSCALL_API NtUserSetWindowsHookEx( HINSTANCE inst, UNICODE_STRING *module, DWORD tid, INT id, HOOKPROC proc, BOOL ansi ); // hook.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserShowCaret( HWND hwnd ); // input.c / main.c / ntuser.h
INT SYSCALL_API NtUserShowCursor( BOOL show ); // cursoricon.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserShowOwnedPopups( HWND owner, BOOL show ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserShowScrollBar( HWND hwnd, INT bar, BOOL show ); // main.c / ntuser.h / scroll.c
BOOL SYSCALL_API NtUserShowWindow( HWND hwnd, INT cmd ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserShowWindowAsync( HWND hwnd, INT cmd ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserSwitchDesktop( HDESK handle ); // main.c / ntuser.h / winstation.c
BOOL SYSCALL_API NtUserSystemParametersInfo( UINT action, UINT val, void *ptr, UINT winini ); // main.c / ntuser.h / sysparams.c
BOOL SYSCALL_API NtUserSystemParametersInfoForDpi( UINT action, UINT val, PVOID ptr, UINT winini, UINT dpi ); // main.c / ntuser.h / sysparams.c
BOOL SYSCALL_API NtUserThunkedMenuInfo( HMENU menu, const MENUINFO *info ); // main.c / menu.c / ntuser.h
UINT SYSCALL_API NtUserThunkedMenuItemInfo( HMENU handle, UINT pos, UINT flags, UINT method, MENUITEMINFOW *info, UNICODE_STRING *str ); // main.c / menu.c / ntuser.h
INT SYSCALL_API NtUserToUnicodeEx( UINT virt, UINT scan, const BYTE *state, WCHAR *str, int size, UINT flags, HKL layout ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserTrackMouseEvent( TRACKMOUSEEVENT *info ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserTrackPopupMenuEx( HMENU handle, UINT flags, INT x, INT y, HWND hwnd, TPMPARAMS *params ); // main.c / menu.c / ntuser.h
INT SYSCALL_API NtUserTranslateAccelerator( HWND hwnd, HACCEL accel, MSG *msg ); // main.c / menu.c / ntuser.h
BOOL SYSCALL_API NtUserTranslateMessage( const MSG *msg, UINT flags ); // main.c / message.c / ntuser.h
BOOL SYSCALL_API NtUserUnhookWinEvent( HWINEVENTHOOK handle ); // hook.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserUnhookWindowsHook( INT id, HOOKPROC proc ); // hook.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserUnhookWindowsHookEx( HHOOK handle ); // hook.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserUnregisterClass( UNICODE_STRING *name, HINSTANCE instance, struct client_menu_name *client_menu_name ); // class.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserUnregisterHotKey( HWND hwnd, INT id ); // input.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserUpdateInputContext( HIMC handle, UINT attr, UINT_PTR value ); // imm.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserUpdateLayeredWindow( HWND hwnd, HDC hdc_dst, const POINT *pts_dst, const SIZE *size, HDC hdc_src, const POINT *pts_src, COLORREF key, const BLENDFUNCTION *blend, DWORD flags, const RECT *dirty ); // main.c / ntuser.h / window.c
BOOL SYSCALL_API NtUserValidateRect( HWND hwnd, const RECT *rect ); // dce.c / main.c / ntuser.h
BOOL SYSCALL_API NtUserValidateRgn( HWND hwnd, HRGN hrgn ); // dce.c / main.c / ntuser.h
W32KAPI WORD WINAPI NtUserVkKeyScanEx( WCHAR chr, HKL layout ); // input.c / main.c / ntuser.h
DWORD SYSCALL_API NtUserWaitForInputIdle( HANDLE process, DWORD timeout, BOOL wow ); // main.c / message.c / ntuser.h
BOOL SYSCALL_API NtUserWaitMessage(void); // main.c / message.c / ntuser.h
HWND SYSCALL_API NtUserWindowFromDC( HDC hdc ); // dce.c / main.c / ntuser.h
HWND SYSCALL_API NtUserWindowFromPoint( LONG x, LONG y ); // main.c / ntuser.h / window.c
NTSYSAPI NTSTATUS WINAPI NtVdmControl(ULONG,PVOID); // winternl.h
NTSTATUS WINAPI NtWaitForAlertByThreadId( const void *address, const LARGE_INTEGER *timeout ); // sync.c / winternl.h
NTSTATUS WINAPI NtWaitForDebugEvent( HANDLE handle, BOOLEAN alertable, LARGE_INTEGER *timeout, DBGUI_WAIT_STATE_CHANGE *state ); // sync.c / winternl.h
NTSTATUS WINAPI NtWaitForKeyedEvent( HANDLE handle, const void *key, BOOLEAN alertable, const LARGE_INTEGER *timeout ); // sync.c / winternl.h
NTSTATUS WINAPI NtWaitForMultipleObjects( DWORD count, const HANDLE *handles, WAIT_TYPE type, BOOLEAN alertable, const LARGE_INTEGER *timeout ); // sync.c / winternl.h
NTSTATUS WINAPI NtWaitForSingleObject( HANDLE handle, BOOLEAN alertable, const LARGE_INTEGER *timeout ); // sync.c / winternl.h
NTSYSAPI NTSTATUS WINAPI NtWaitHighEventPair(HANDLE); // winternl.h
NTSYSAPI NTSTATUS WINAPI NtWaitLowEventPair(HANDLE); // winternl.h
NTSTATUS WINAPI NtWorkerFactoryWorkerReady( HANDLE handle ); // thread.c / winternl.h
NTSTATUS WINAPI NtWow64AllocateVirtualMemory64( HANDLE process, ULONG64 *ret, ULONG64 zero_bits, ULONG64 *size_ptr, ULONG type, ULONG protect ); // virtual.c / winternl.h
NTSTATUS WINAPI NtWow64GetNativeSystemInformation( SYSTEM_INFORMATION_CLASS class, void *info, ULONG len, ULONG *retlen ); // virtual.c / winternl.h
NTSTATUS WINAPI NtWow64IsProcessorFeaturePresent( UINT feature ); // virtual.c / winternl.h
NTSTATUS WINAPI NtWow64QueryInformationProcess64( HANDLE handle, PROCESSINFOCLASS class, void *info, ULONG size, ULONG *ret_len ); // process.c / winternl.h
NTSTATUS WINAPI NtWow64ReadVirtualMemory64( HANDLE process, ULONG64 addr, void *buffer, ULONG64 size, ULONG64 *bytes_read ); // virtual.c / winternl.h
NTSTATUS WINAPI NtWow64WriteVirtualMemory64( HANDLE process, ULONG64 addr, const void *buffer, ULONG64 size, ULONG64 *bytes_written ); // virtual.c / winternl.h
NTSTATUS WINAPI NtWriteFile( HANDLE handle, HANDLE event, PIO_APC_ROUTINE apc, void *apc_user, IO_STATUS_BLOCK *io, const void *buffer, ULONG length, LARGE_INTEGER *offset, ULONG *key ); // file.c / winternl.h
NTSTATUS WINAPI NtWriteFileGather( HANDLE file, HANDLE event, PIO_APC_ROUTINE apc, void *apc_user, IO_STATUS_BLOCK *io, FILE_SEGMENT_ELEMENT *segments, ULONG length, LARGE_INTEGER *offset, ULONG *key ); // file.c / winternl.h
NTSTATUS WINAPI NtWriteRequestData( HANDLE handle, LPC_MESSAGE *request, ULONG id, void *buffer, ULONG len, ULONG *retlen ); // sync.c / winternl.h
NTSTATUS WINAPI NtWriteVirtualMemory( HANDLE process, void *addr, const void *buffer, SIZE_T size, SIZE_T *bytes_written ); // virtual.c / winternl.h
NTSTATUS WINAPI NtYieldExecution(void); // sync.c / winternl.h
NTSTATUS WINAPI ZwAccessCheckAndAuditAlarm(PUNICODE_STRING,HANDLE,PUNICODE_STRING,PUNICODE_STRING,PSECURITY_DESCRIPTOR,ACCESS_MASK,PGENERIC_MAPPING,BOOLEAN,PACCESS_MASK,PBOOLEAN,PBOOLEAN); // wdm.h
NTSTATUS WINAPI ZwAddBootEntry(PUNICODE_STRING,PUNICODE_STRING); // wdm.h
NTSTATUS WINAPI ZwAdjustPrivilegesToken(HANDLE,BOOLEAN,PTOKEN_PRIVILEGES,DWORD,PTOKEN_PRIVILEGES,PDWORD); // wdm.h
NTSTATUS WINAPI ZwAlertThread(HANDLE ThreadHandle); // wdm.h
NTSTATUS WINAPI ZwAllocateVirtualMemory(HANDLE,PVOID*,ULONG,SIZE_T*,ULONG,ULONG); // wdm.h
NTSTATUS WINAPI ZwCancelIoFile(HANDLE,PIO_STATUS_BLOCK); // wdm.h
NTSTATUS WINAPI ZwCancelTimer(HANDLE, BOOLEAN*); // wdm.h
NTSTATUS WINAPI ZwClearEvent(HANDLE); // wdm.h
NTSTATUS WINAPI ZwClose(HANDLE); // wdm.h
NTSTATUS WINAPI ZwCloseObjectAuditAlarm(PUNICODE_STRING,HANDLE,BOOLEAN); // wdm.h
NTSTATUS WINAPI ZwConnectPort(PHANDLE,PUNICODE_STRING,PSECURITY_QUALITY_OF_SERVICE,PLPC_SECTION_WRITE,PLPC_SECTION_READ,PULONG,PVOID,PULONG); // wdm.h
NTSTATUS WINAPI ZwCreateDirectoryObject(PHANDLE,ACCESS_MASK,POBJECT_ATTRIBUTES); // wdm.h
NTSTATUS WINAPI ZwCreateEvent(PHANDLE,ACCESS_MASK,const OBJECT_ATTRIBUTES *,EVENT_TYPE,BOOLEAN); // wdm.h
NTSTATUS WINAPI ZwCreateFile(PHANDLE,ACCESS_MASK,POBJECT_ATTRIBUTES,PIO_STATUS_BLOCK,PLARGE_INTEGER,ULONG,ULONG,ULONG,ULONG,PVOID,ULONG); // wdm.h
NTSTATUS WINAPI ZwCreateKey(PHANDLE,ACCESS_MASK,const OBJECT_ATTRIBUTES*,ULONG,const UNICODE_STRING*,ULONG,PULONG); // wdm.h
NTSTATUS WINAPI ZwCreateSection(HANDLE*,ACCESS_MASK,const OBJECT_ATTRIBUTES*,const LARGE_INTEGER*,ULONG,ULONG,HANDLE); // wdm.h
NTSTATUS WINAPI ZwCreateSymbolicLinkObject(PHANDLE,ACCESS_MASK,POBJECT_ATTRIBUTES,PUNICODE_STRING); // wdm.h
NTSTATUS WINAPI ZwCreateTimer(HANDLE*, ACCESS_MASK, const OBJECT_ATTRIBUTES*, TIMER_TYPE); // wdm.h
NTSTATUS WINAPI ZwDeleteAtom(RTL_ATOM); // wdm.h
NTSTATUS WINAPI ZwDeleteFile(POBJECT_ATTRIBUTES); // wdm.h
NTSTATUS WINAPI ZwDeleteKey(HANDLE); // wdm.h
NTSTATUS WINAPI ZwDeleteValueKey(HANDLE,const UNICODE_STRING *); // wdm.h
NTSTATUS WINAPI ZwDeviceIoControlFile(HANDLE,HANDLE,PIO_APC_ROUTINE,PVOID,PIO_STATUS_BLOCK,ULONG,PVOID,ULONG,PVOID,ULONG); // wdm.h
NTSTATUS WINAPI ZwDisplayString(PUNICODE_STRING); // wdm.h
NTSTATUS WINAPI ZwDuplicateObject(HANDLE,HANDLE,HANDLE,PHANDLE,ACCESS_MASK,ULONG,ULONG); // wdm.h
NTSTATUS WINAPI ZwDuplicateToken(HANDLE,ACCESS_MASK,POBJECT_ATTRIBUTES,SECURITY_IMPERSONATION_LEVEL,TOKEN_TYPE,PHANDLE); // wdm.h
NTSTATUS WINAPI ZwEnumerateKey(HANDLE,ULONG,KEY_INFORMATION_CLASS,void *,DWORD,DWORD *); // wdm.h
NTSTATUS WINAPI ZwEnumerateValueKey(HANDLE,ULONG,KEY_VALUE_INFORMATION_CLASS,PVOID,ULONG,PULONG); // wdm.h
NTSTATUS WINAPI ZwFlushInstructionCache(HANDLE,LPCVOID,SIZE_T); // wdm.h
NTSTATUS WINAPI ZwFlushKey(HANDLE); // wdm.h
NTSTATUS WINAPI ZwFlushVirtualMemory(HANDLE,LPCVOID*,SIZE_T*,ULONG); // wdm.h
NTSTATUS WINAPI ZwFreeVirtualMemory(HANDLE,PVOID*,SIZE_T*,ULONG); // wdm.h
NTSTATUS WINAPI ZwFsControlFile(HANDLE,HANDLE,PIO_APC_ROUTINE,PVOID,PIO_STATUS_BLOCK,ULONG,PVOID,ULONG,PVOID,ULONG); // wdm.h
NTSTATUS WINAPI ZwInitiatePowerAction(POWER_ACTION,SYSTEM_POWER_STATE,ULONG,BOOLEAN); // wdm.h
NTSTATUS WINAPI ZwLoadDriver( const UNICODE_STRING *service_name ); // ntoskrnl.c / wdm.h
NTSTATUS WINAPI ZwLoadKey(const OBJECT_ATTRIBUTES *,OBJECT_ATTRIBUTES *); // wdm.h
NTSTATUS WINAPI ZwLockVirtualMemory(HANDLE,PVOID*,SIZE_T*,ULONG); // wdm.h
NTSTATUS WINAPI ZwMakeTemporaryObject(HANDLE); // wdm.h
NTSTATUS WINAPI ZwMapViewOfSection(HANDLE,HANDLE,PVOID*,ULONG,SIZE_T,const LARGE_INTEGER*,SIZE_T*,SECTION_INHERIT,ULONG,ULONG); // wdm.h
NTSTATUS WINAPI ZwNotifyChangeKey(HANDLE,HANDLE,PIO_APC_ROUTINE,PVOID,PIO_STATUS_BLOCK,ULONG,BOOLEAN,PVOID,ULONG,BOOLEAN); // wdm.h
NTSTATUS WINAPI ZwOpenDirectoryObject(PHANDLE,ACCESS_MASK,POBJECT_ATTRIBUTES); // wdm.h
NTSTATUS WINAPI ZwOpenEvent(PHANDLE,ACCESS_MASK,const OBJECT_ATTRIBUTES *); // wdm.h
NTSTATUS WINAPI ZwOpenFile(PHANDLE,ACCESS_MASK,POBJECT_ATTRIBUTES,PIO_STATUS_BLOCK,ULONG,ULONG); // wdm.h
NTSTATUS WINAPI ZwOpenKey(PHANDLE,ACCESS_MASK,const OBJECT_ATTRIBUTES *); // wdm.h
NTSTATUS WINAPI ZwOpenProcess(PHANDLE,ACCESS_MASK,const OBJECT_ATTRIBUTES*,const CLIENT_ID*); // wdm.h
NTSTATUS WINAPI ZwOpenProcessToken(HANDLE,DWORD,HANDLE *); // wdm.h
NTSTATUS WINAPI ZwOpenSection(HANDLE*,ACCESS_MASK,const OBJECT_ATTRIBUTES*); // wdm.h
NTSTATUS WINAPI ZwOpenSymbolicLinkObject(PHANDLE,ACCESS_MASK,POBJECT_ATTRIBUTES); // wdm.h
NTSTATUS WINAPI ZwOpenThread(HANDLE*,ACCESS_MASK,const OBJECT_ATTRIBUTES*,const CLIENT_ID*); // wdm.h
NTSTATUS WINAPI ZwOpenThreadToken(HANDLE,DWORD,BOOLEAN,HANDLE *); // wdm.h
NTSTATUS WINAPI ZwOpenTimer(HANDLE*, ACCESS_MASK, const OBJECT_ATTRIBUTES*); // wdm.h
NTSTATUS WINAPI ZwPowerInformation(POWER_INFORMATION_LEVEL,PVOID,ULONG,PVOID,ULONG); // wdm.h
NTSTATUS WINAPI ZwPulseEvent(HANDLE,PULONG); // wdm.h
NTSTATUS WINAPI ZwQueryDefaultLocale(BOOLEAN,LCID*); // wdm.h
NTSTATUS WINAPI ZwQueryDefaultUILanguage(LANGID*); // wdm.h
NTSTATUS WINAPI ZwQueryDirectoryFile(HANDLE,HANDLE,PIO_APC_ROUTINE,PVOID,PIO_STATUS_BLOCK,PVOID,ULONG,FILE_INFORMATION_CLASS,BOOLEAN,PUNICODE_STRING,BOOLEAN); // wdm.h
NTSTATUS WINAPI ZwQueryDirectoryObject(HANDLE,PDIRECTORY_BASIC_INFORMATION,ULONG,BOOLEAN,BOOLEAN,PULONG,PULONG); // wdm.h
NTSTATUS WINAPI ZwQueryEaFile(HANDLE,PIO_STATUS_BLOCK,PVOID,ULONG,BOOLEAN,PVOID,ULONG,PVOID,BOOLEAN); // wdm.h
NTSTATUS WINAPI ZwQueryFullAttributesFile(const OBJECT_ATTRIBUTES*,FILE_NETWORK_OPEN_INFORMATION*); // wdm.h
NTSTATUS WINAPI ZwQueryInformationFile(HANDLE,PIO_STATUS_BLOCK,PVOID,LONG,FILE_INFORMATION_CLASS); // wdm.h
NTSTATUS WINAPI ZwQueryInformationProcess(HANDLE,PROCESSINFOCLASS,void*,ULONG,ULONG*); // driver.c
NTSTATUS WINAPI ZwQueryInformationThread(HANDLE,THREADINFOCLASS,PVOID,ULONG,PULONG); // wdm.h
NTSTATUS WINAPI ZwQueryInformationToken(HANDLE,DWORD,PVOID,DWORD,LPDWORD); // wdm.h
NTSTATUS WINAPI ZwQueryInstallUILanguage(LANGID*); // wdm.h
NTSTATUS WINAPI ZwQueryKey(HANDLE,KEY_INFORMATION_CLASS,void *,DWORD,DWORD *); // wdm.h
NTSTATUS WINAPI ZwQueryObject(HANDLE, OBJECT_INFORMATION_CLASS, PVOID, ULONG, PULONG); // wdm.h
NTSTATUS WINAPI ZwQuerySection(HANDLE,SECTION_INFORMATION_CLASS,PVOID,ULONG,PULONG); // wdm.h
NTSTATUS WINAPI ZwQuerySecurityObject(HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR,ULONG,PULONG); // wdm.h
NTSTATUS WINAPI ZwQuerySymbolicLinkObject(HANDLE,PUNICODE_STRING,PULONG); // wdm.h
NTSTATUS WINAPI ZwQuerySystemInformation(SYSTEM_INFORMATION_CLASS,PVOID,ULONG,PULONG); // wdm.h
NTSTATUS WINAPI ZwQueryTimerResolution(PULONG,PULONG,PULONG); // wdm.h
NTSTATUS WINAPI ZwQueryValueKey(HANDLE,const UNICODE_STRING *,KEY_VALUE_INFORMATION_CLASS,void *,DWORD,DWORD *); // wdm.h
NTSTATUS WINAPI ZwQueryVolumeInformationFile(HANDLE,PIO_STATUS_BLOCK,PVOID,ULONG,FS_INFORMATION_CLASS); // wdm.h
NTSTATUS WINAPI ZwReadFile(HANDLE,HANDLE,PIO_APC_ROUTINE,PVOID,PIO_STATUS_BLOCK,PVOID,ULONG,PLARGE_INTEGER,PULONG); // wdm.h
NTSTATUS WINAPI ZwReplaceKey(POBJECT_ATTRIBUTES,HANDLE,POBJECT_ATTRIBUTES); // wdm.h
NTSTATUS WINAPI ZwRequestWaitReplyPort(HANDLE,PLPC_MESSAGE,PLPC_MESSAGE); // wdm.h
NTSTATUS WINAPI ZwResetEvent(HANDLE,PULONG); // wdm.h
NTSTATUS WINAPI ZwRestoreKey(HANDLE,HANDLE,ULONG); // wdm.h
NTSTATUS WINAPI ZwSaveKey(HANDLE,HANDLE); // wdm.h
NTSTATUS WINAPI ZwSecureConnectPort(PHANDLE,PUNICODE_STRING,PSECURITY_QUALITY_OF_SERVICE,PLPC_SECTION_WRITE,PSID,PLPC_SECTION_READ,PULONG,PVOID,PULONG); // wdm.h
NTSTATUS WINAPI ZwSetDefaultLocale(BOOLEAN,LCID); // wdm.h
NTSTATUS WINAPI ZwSetDefaultUILanguage(LANGID); // wdm.h
NTSTATUS WINAPI ZwSetEaFile(HANDLE,PIO_STATUS_BLOCK,PVOID,ULONG); // wdm.h
NTSTATUS WINAPI ZwSetEvent(HANDLE,PULONG); // wdm.h
NTSTATUS WINAPI ZwSetInformationFile(HANDLE,PIO_STATUS_BLOCK,PVOID,ULONG,FILE_INFORMATION_CLASS); // wdm.h
NTSTATUS WINAPI ZwSetInformationKey(HANDLE,const int,PVOID,ULONG); // wdm.h
NTSTATUS WINAPI ZwSetInformationObject(HANDLE, OBJECT_INFORMATION_CLASS, PVOID, ULONG); // wdm.h
NTSTATUS WINAPI ZwSetInformationProcess(HANDLE,PROCESSINFOCLASS,PVOID,ULONG); // wdm.h
NTSTATUS WINAPI ZwSetInformationThread(HANDLE,THREADINFOCLASS,LPCVOID,ULONG); // wdm.h
NTSTATUS WINAPI ZwSetIoCompletion(HANDLE,ULONG,ULONG,NTSTATUS,ULONG); // wdm.h
NTSTATUS WINAPI ZwSetLdtEntries(ULONG,ULONG,ULONG,ULONG,ULONG,ULONG); // wdm.h
NTSTATUS WINAPI ZwSetSecurityObject(HANDLE,SECURITY_INFORMATION,PSECURITY_DESCRIPTOR); // wdm.h
NTSTATUS WINAPI ZwSetSystemInformation(SYSTEM_INFORMATION_CLASS,PVOID,ULONG); // wdm.h
NTSTATUS WINAPI ZwSetSystemTime(const LARGE_INTEGER*,LARGE_INTEGER*); // wdm.h
NTSTATUS WINAPI ZwSetTimer(HANDLE, const LARGE_INTEGER*, PTIMER_APC_ROUTINE, PVOID, BOOLEAN, ULONG, BOOLEAN*); // wdm.h
NTSTATUS WINAPI ZwSetValueKey(HANDLE,const UNICODE_STRING *,ULONG,ULONG,const void *,ULONG); // wdm.h
NTSTATUS WINAPI ZwSetVolumeInformationFile(HANDLE,PIO_STATUS_BLOCK,PVOID,ULONG,FS_INFORMATION_CLASS); // wdm.h
NTSTATUS WINAPI ZwSuspendThread(HANDLE,PULONG); // wdm.h
NTSTATUS WINAPI ZwTerminateProcess(HANDLE,LONG); // wdm.h
NTSTATUS WINAPI ZwUnloadDriver( const UNICODE_STRING *service_name ); // ntoskrnl.c / wdm.h
NTSTATUS WINAPI ZwUnloadKey(HANDLE); // wdm.h
NTSTATUS WINAPI ZwUnmapViewOfSection(HANDLE,PVOID); // wdm.h
NTSTATUS WINAPI ZwWaitForMultipleObjects(ULONG,const HANDLE*,WAIT_TYPE,BOOLEAN,const LARGE_INTEGER*); // wdm.h
NTSTATUS WINAPI ZwWaitForSingleObject(HANDLE,BOOLEAN,const LARGE_INTEGER*); // wdm.h
NTSTATUS WINAPI ZwWriteFile(HANDLE,HANDLE,PIO_APC_ROUTINE,PVOID,PIO_STATUS_BLOCK,const void*,ULONG,PLARGE_INTEGER,PULONG); // wdm.h
NTSTATUS WINAPI ZwYieldExecution(void); // wdm.h
