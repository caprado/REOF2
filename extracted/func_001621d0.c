void func_001621d0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001621d0: addiu $sp, $sp, -0x20
    func_0015fcb0();  // 0x15fc80                                // 0x001621e4: jal 0x15fc80
    a0 = 0x23 << 16;                                            // 0x001621ec: lui $a0, 0x23
    if (v0 != 0) goto label_0x162210;                           // 0x001621f0: bnez $v0, 0x162210
    a0 = &str_00228988;  // "E10915B: mwPlyEntryFname: fname is NULL." // 0x001621f4: addiu $a0, $a0, -0x7678
    return func_001634a8();  // Tail call                        // 0x00162204: j 0x163410
    sp = sp + 0x20;                                             // 0x00162208: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016220c: nop 
label_0x162210:
    /* bnezl $s0, 0x162238 */                                   // 0x00162210: bnezl $s0, 0x162238
    a0 = *(int32_t*)((s1) + 0x4c);                              // 0x00162214: lw $a0, 0x4c($s1)
    a0 = 0x23 << 16;                                            // 0x00162218: lui $a0, 0x23
    a0 = &str_002289b8;  // "E204021: mwPlyEntryFname: Can't entry file'%s'" // 0x00162224: addiu $a0, $a0, -0x7648
    return func_001634a8();  // Tail call                        // 0x0016222c: j 0x163410
    sp = sp + 0x20;                                             // 0x00162230: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x00162234: nop 
    func_0013c9f8();  // 0x13c9d0                                // 0x00162238: jal 0x13c9d0
    a0 = 0x23 << 16;                                            // 0x00162240: lui $a0, 0x23
    if (v0 >= 0) goto label_0x162270;                           // 0x00162248: bgez $v0, 0x162270
    a0 = &str_002289e8;  // "E1122634: mwPlyStartSeamless: handle is invalid." // 0x0016224c: addiu $a0, $a0, -0x7618
    v0 = 4;                                                     // 0x00162250: addiu $v0, $zero, 4
    *(uint32_t*)((s1) + 8) = v0;                                // 0x00162258: sw $v0, 8($s1)
    return func_001634a8();  // Tail call                        // 0x00162264: j 0x163410
    sp = sp + 0x20;                                             // 0x00162268: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0016226c: nop 
label_0x162270:
    v0 = *(int32_t*)((s1) + 0x74);                              // 0x00162270: lw $v0, 0x74($s1)
    v0 = v0 + 1;                                                // 0x00162278: addiu $v0, $v0, 1
    *(uint32_t*)((s1) + 0x74) = v0;                             // 0x00162280: sw $v0, 0x74($s1)
    return;                                                     // 0x00162288: jr $ra
    sp = sp + 0x20;                                             // 0x0016228c: addiu $sp, $sp, 0x20
}