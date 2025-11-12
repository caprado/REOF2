void func_00162290() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
label_0x162290:
    sp = sp + -0x10;                                            // 0x00162290: addiu $sp, $sp, -0x10
    func_0015fcb0();  // 0x15fc80                                // 0x0016229c: jal 0x15fc80
    a1 = 1;                                                     // 0x001622a4: addiu $a1, $zero, 1
    if (v0 != 0) goto label_0x1622c8;                           // 0x001622a8: bnez $v0, 0x1622c8
    a0 = 0x23 << 16;                                            // 0x001622b0: lui $a0, 0x23
    a0 = &str_00228a18;  // "E1122641: mwPlySetLpFlg: handle is invalid." // 0x001622bc: addiu $a0, $a0, -0x75e8
    return func_001634a8();  // Tail call                        // 0x001622c0: j 0x163410
    sp = sp + 0x10;                                             // 0x001622c4: addiu $sp, $sp, 0x10
label_0x1622c8:
    func_00162858();  // 0x1627b8                                // 0x001622c8: jal 0x1627b8
    /* nop */                                                   // 0x001622cc: nop 
    func_0015efb0();  // 0x15ef30                                // 0x001622d4: jal 0x15ef30
    a1 = *(int32_t*)((s0) + 0x12c);                             // 0x001622d8: lw $a1, 0x12c($s0)
    func_0015f2c8();  // 0x15f270                                // 0x001622dc: jal 0x15f270
    func_0013cc38();  // 0x13cbd0                                // 0x001622e4: jal 0x13cbd0
    a0 = *(int32_t*)((s0) + 0x4c);                              // 0x001622e8: lw $a0, 0x4c($s0)
    v0 = *(int32_t*)((s0) + 0x128);                             // 0x001622ec: lw $v0, 0x128($s0)
    if (v0 == 0) goto label_0x162308;                           // 0x001622f0: beqz $v0, 0x162308
    v0 = *(int32_t*)(v0);                                       // 0x001622f8: lw $v0, 0($v0)
    v1 = *(int32_t*)((v0) + 0x14);                              // 0x001622fc: lw $v1, 0x14($v0)
    /* call function at address in v1 */                        // 0x00162300: jalr $v1
    /* nop */                                                   // 0x00162304: nop 
label_0x162308:
    return func_0015bd38();  // Tail call                        // 0x00162314: j 0x15bc68
    sp = sp + 0x10;                                             // 0x00162318: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0016231c: nop 
    sp = sp + -0x20;                                            // 0x00162320: addiu $sp, $sp, -0x20
    func_0015fcb0();  // 0x15fc80                                // 0x00162334: jal 0x15fc80
    a0 = 0x23 << 16;                                            // 0x0016233c: lui $a0, 0x23
    if (v0 != 0) goto label_0x162360;                           // 0x00162344: bnez $v0, 0x162360
    a0 = &str_00228a50;  // "E1122630: mwPlyStartFnameLp: handle is invalid." // 0x00162348: addiu $a0, $a0, -0x75b0
    return func_001634a8();  // Tail call                        // 0x00162358: j 0x163410
    sp = sp + 0x20;                                             // 0x0016235c: addiu $sp, $sp, 0x20
label_0x162360:
    a0 = *(int32_t*)((s1) + 0x4c);                              // 0x00162360: lw $a0, 0x4c($s1)
    return func_0013d158();  // Tail call                        // 0x00162370: j 0x13d128
    sp = sp + 0x20;                                             // 0x00162374: addiu $sp, $sp, 0x20
    sp = sp + -0x20;                                            // 0x00162378: addiu $sp, $sp, -0x20
    func_0015fcb0();  // 0x15fc80                                // 0x0016238c: jal 0x15fc80
    a0 = 0x23 << 16;                                            // 0x00162394: lui $a0, 0x23
    if (v0 != 0) goto label_0x1623b8;                           // 0x00162398: bnez $v0, 0x1623b8
    a0 = &str_00228a80;  // "E10915A: mwPlyStartFnameLp: fname is NULL." // 0x0016239c: addiu $a0, $a0, -0x7580
    return func_001634a8();  // Tail call                        // 0x001623ac: j 0x163410
    sp = sp + 0x20;                                             // 0x001623b0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x001623b4: nop 
label_0x1623b8:
    if (s1 != 0) goto label_0x1623d8;                           // 0x001623b8: bnez $s1, 0x1623d8
    a0 = 0x23 << 16;                                            // 0x001623c0: lui $a0, 0x23
    a0 = &str_00228ab0;  // "E1122631: mwPlyReleaseLp: handle is invalid." // 0x001623cc: addiu $a0, $a0, -0x7550
    return func_001634a8();  // Tail call                        // 0x001623d0: j 0x163410
    sp = sp + 0x20;                                             // 0x001623d4: addiu $sp, $sp, 0x20
label_0x1623d8:
    func_0013ccc0();  // 0x13cc38                                // 0x001623d8: jal 0x13cc38
    a0 = *(int32_t*)((s0) + 0x4c);                              // 0x001623dc: lw $a0, 0x4c($s0)
    func_00162290();  // 0x1621d0                                // 0x001623e4: jal 0x1621d0
    func_00162378();  // 0x162320                                // 0x001623f0: jal 0x162320
    a1 = 1;                                                     // 0x001623f4: addiu $a1, $zero, 1
    goto label_0x162290;                                        // 0x00162408: j 0x162290
    sp = sp + 0x20;                                             // 0x0016240c: addiu $sp, $sp, 0x20
    sp = sp + -0x10;                                            // 0x00162410: addiu $sp, $sp, -0x10
    func_0015fcb0();  // 0x15fc80                                // 0x0016241c: jal 0x15fc80
    if (v0 != 0) goto label_0x162448;                           // 0x00162428: bnez $v0, 0x162448
    a0 = 0x23 << 16;                                            // 0x00162430: lui $a0, 0x23
    a0 = &str_00228ae0;  // "E1122635: mwPlyReleaseSeamless: handle is invalid." // 0x0016243c: addiu $a0, $a0, -0x7520
    return func_001634a8();  // Tail call                        // 0x00162440: j 0x163410
    sp = sp + 0x10;                                             // 0x00162444: addiu $sp, $sp, 0x10
label_0x162448:
    func_00162378();  // 0x162320                                // 0x00162448: jal 0x162320
    /* nop */                                                   // 0x0016244c: nop 
    goto label_0x162468;                                        // 0x0016245c: j 0x162468
    sp = sp + 0x10;                                             // 0x00162460: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x00162464: nop 
label_0x162468:
    sp = sp + -0x10;                                            // 0x00162468: addiu $sp, $sp, -0x10
    func_0015fcb0();  // 0x15fc80                                // 0x00162474: jal 0x15fc80
    if (v0 != 0) goto label_0x1624a0;                           // 0x00162480: bnez $v0, 0x1624a0
    a0 = 0x23 << 16;                                            // 0x00162488: lui $a0, 0x23
    a0 = &str_00228b10;  // "E1122636: mwPlyEntryAfs: handle is invalid." // 0x00162494: addiu $a0, $a0, -0x74f0
    return func_001634a8();  // Tail call                        // 0x00162498: j 0x163410
    sp = sp + 0x10;                                             // 0x0016249c: addiu $sp, $sp, 0x10
label_0x1624a0:
    return func_00162858();  // Tail call                        // 0x001624a8: j 0x1627b8
    sp = sp + 0x10;                                             // 0x001624ac: addiu $sp, $sp, 0x10
    sp = sp + -0x10;                                            // 0x001624b0: addiu $sp, $sp, -0x10
    a0 = g_00228b5c;  // Global at 0x00228b5c                   // 0x001624b8: lw $a0, 0x4c($a0)
    return func_0013cdc0();  // Tail call                        // 0x001624c0: j 0x13cd90
    sp = sp + 0x10;                                             // 0x001624c4: addiu $sp, $sp, 0x10
    sp = sp + -0x30;                                            // 0x001624c8: addiu $sp, $sp, -0x30
    func_0015fcb0();  // 0x15fc80                                // 0x001624e4: jal 0x15fc80
    t0 = sp + 4;                                                // 0x001624f0: addiu $t0, $sp, 4
    if (v0 != 0) goto label_0x162518;                           // 0x001624fc: bnez $v0, 0x162518
    t1 = sp + 8;                                                // 0x00162500: addiu $t1, $sp, 8
    a0 = 0x23 << 16;                                            // 0x00162504: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x00162508: jal 0x163410
    a0 = &str_00228b48;  // "E008311 mwPlyEntryAfs: can't entry pid=%d fid=%d" // 0x0016250c: addiu $a0, $a0, -0x74b8
    goto label_0x162570;                                        // 0x00162510: b 0x162570
label_0x162518:
    a2 = *(int32_t*)((s1) + 0x110);                             // 0x00162518: lw $a2, 0x110($s1)
    func_00129c30();  // 0x129ad8                                // 0x0016251c: jal 0x129ad8
    s1 = *(int32_t*)((s1) + 0x4c);                              // 0x00162520: lw $s1, 0x4c($s1)
    if (v0 != 0) goto label_0x162560;                           // 0x0016252c: bnez $v0, 0x162560
    func_00129c58();  // 0x129c30                                // 0x00162534: jal 0x129c30
    /* nop */                                                   // 0x00162538: nop 
    a2 = local_0;                                               // 0x00162540: lw $a2, 0($sp)
    a3 = local_4;                                               // 0x00162548: lw $a3, 4($sp)
    func_0013cb90();  // 0x13c9f8                                // 0x0016254c: jal 0x13c9f8
    t0 = local_8;                                               // 0x00162550: lw $t0, 8($sp)
    goto label_0x162570;                                        // 0x00162554: b 0x162570
    /* nop */                                                   // 0x0016255c: nop 
label_0x162560:
    a0 = 0x23 << 16;                                            // 0x00162560: lui $a0, 0x23
    func_001634a8();  // 0x163410                                // 0x00162564: jal 0x163410
    a0 = &str_00228b78;  // "E1122632: mwPlyStartAfsLp: handle is invalid." // 0x00162568: addiu $a0, $a0, -0x7488
label_0x162570:
    return;                                                     // 0x0016257c: jr $ra
    sp = sp + 0x30;                                             // 0x00162580: addiu $sp, $sp, 0x30
}