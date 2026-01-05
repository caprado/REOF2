void func_0012a4f0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012a4f0: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x12a510;                           // 0x0012a4f4: bnez $a0, 0x12a510
    a0 = 0x22 << 16;                                            // 0x0012a4fc: lui $a0, 0x22
    a0 = &str_00222c48;  // "E02080852 ADXT_StartFnameLp: parameter error" // 0x0012a504: addiu $a0, $a0, 0x2c48
    return func_00127de8();  // Tail call                        // 0x0012a508: j 0x127d90
    sp = sp + 0x10;                                             // 0x0012a50c: addiu $sp, $sp, 0x10
label_0x12a510:
    a0 = g_00222cdc;  // Global at 0x00222cdc                   // 0x0012a510: lw $a0, 0x94($a0)
    return func_0013d158();  // Tail call                        // 0x0012a518: j 0x13d128
    sp = sp + 0x10;                                             // 0x0012a51c: addiu $sp, $sp, 0x10
    sp = sp + -0x20;                                            // 0x0012a520: addiu $sp, $sp, -0x20
    if (s1 == 0) goto label_0x12a548;                           // 0x0012a538: beqz $s1, 0x12a548
    /* bnezl $s2, 0x12a568 */                                   // 0x0012a540: bnezl $s2, 0x12a568
    s0 = *(int32_t*)((s1) + 0x94);                              // 0x0012a544: lw $s0, 0x94($s1)
label_0x12a548:
    a0 = 0x22 << 16;                                            // 0x0012a548: lui $a0, 0x22
    a0 = &str_00222c78;  // "E02080854 ADXT_GetNumFiles: parameter error" // 0x0012a554: addiu $a0, $a0, 0x2c78
    return func_00127de8();  // Tail call                        // 0x0012a560: j 0x127d90
    sp = sp + 0x20;                                             // 0x0012a564: addiu $sp, $sp, 0x20
    func_0013cc38();  // 13cc38                                // 0x0012a568: jal 0x13cc38
    func_0012a318();  // 12a318                                // 0x0012a574: jal 0x12a318
    func_0013d128();  // 13d128                                // 0x0012a580: jal 0x13d128
    a1 = 1;                                                     // 0x0012a584: addiu $a1, $zero, 1
    return func_0012a4f0();  // Tail call                        // 0x0012a59c: j 0x12a440
    sp = sp + 0x20;                                             // 0x0012a5a0: addiu $sp, $sp, 0x20
    /* nop */                                                   // 0x0012a5a4: nop 
    return;                                                     // 0x0012a5a8: jr $ra
    /* nop */                                                   // 0x0012a5ac: nop 
}