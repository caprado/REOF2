void func_0012a318() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0012a318: addiu $sp, $sp, -0x10
    if (a0 != 0) goto label_0x12a348;                           // 0x0012a328: bnez $a0, 0x12a348
    v0 = g_00222c34;  // Global at 0x00222c34                   // 0x0012a32c: lw $v0, 0x94($a0)
    a0 = 0x22 << 16;                                            // 0x0012a330: lui $a0, 0x22
    a0 = &str_00222b70;  // "E0010601:Can't entry file "        // 0x0012a33c: addiu $a0, $a0, 0x2b70
    return func_00127de8();  // Tail call                        // 0x0012a340: j 0x127d90
    sp = sp + 0x10;                                             // 0x0012a344: addiu $sp, $sp, 0x10
label_0x12a348:
    func_0013c9f8();  // 0x13c9d0                                // 0x0012a348: jal 0x13c9d0
    a0 = 0x22 << 16;                                            // 0x0012a350: lui $a0, 0x22
    a0 = &str_00222ba0;  // "E02080855 ADXT_EntryAfs: parameter error" // 0x0012a354: addiu $a0, $a0, 0x2ba0
    if (v0 >= 0) goto label_0x12a368;                           // 0x0012a358: bgez $v0, 0x12a368
    func_00127e58();  // 0x127de8                                // 0x0012a360: jal 0x127de8
    /* nop */                                                   // 0x0012a364: nop 
label_0x12a368:
    return;                                                     // 0x0012a370: jr $ra
    sp = sp + 0x10;                                             // 0x0012a374: addiu $sp, $sp, 0x10
}