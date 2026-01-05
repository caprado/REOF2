void func_001ce550() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001ce550: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001ce558: addu.qb $zero, $sp, $s1
    a0 = 0x32 << 16;                                            // 0x001ce568: lui $a0, 0x32
    a0 = a0 + 0x3710;                                           // 0x001ce56c: addiu $a0, $a0, 0x3710
    thunk_func_001ce7d0();  // 1ce7d0                          // 0x001ce570: jal 0x1ce7d0
    a1 = 0 | 0xf003;                                            // 0x001ce574: ori $a1, $zero, 0xf003
    a0 = 0x32 << 16;                                            // 0x001ce578: lui $a0, 0x32
    a1 = 1;                                                     // 0x001ce57c: addiu $a1, $zero, 1
    thunk_func_001ce7e0();  // 1ce7e0                          // 0x001ce580: jal 0x1ce7e0
    a0 = a0 + 0x3710;                                           // 0x001ce584: addiu $a0, $a0, 0x3710
    a0 = 0x32 << 16;                                            // 0x001ce588: lui $a0, 0x32
    thunk_func_001ce7e0();  // 1ce7e0                          // 0x001ce590: jal 0x1ce7e0
    a0 = a0 + 0x3710;                                           // 0x001ce594: addiu $a0, $a0, 0x3710
    a0 = 0x32 << 16;                                            // 0x001ce598: lui $a0, 0x32
    thunk_func_001ce7e0();  // 1ce7e0                          // 0x001ce5a0: jal 0x1ce7e0
    a0 = a0 + 0x3710;                                           // 0x001ce5a4: addiu $a0, $a0, 0x3710
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001ce5ac: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001ce5b0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001ce5b4: jr $ra
    sp = sp + 0x30;                                             // 0x001ce5b8: addiu $sp, $sp, 0x30
}