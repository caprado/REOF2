void func_00130ca8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00130ca8: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s0) + 0x4c);                              // 0x00130cc0: lw $v0, 0x4c($s0)
    /* beqzl $v0, 0x130d1c */                                   // 0x00130cc4: beqzl $v0, 0x130d1c
    v0 = *(int32_t*)((s0) + 8);                                 // 0x00130ccc: lw $v0, 8($s0)
    /* bnezl $v0, 0x130d1c */                                   // 0x00130cd0: bnezl $v0, 0x130d1c
    v0 = 1;                                                     // 0x00130cd8: addiu $v0, $zero, 1
    v1 = 0x20 << 16;                                            // 0x00130cdc: lui $v1, 0x20
    *(uint8_t*)((s0) + 0x41) = v0;                              // 0x00130ce0: sb $v0, 0x41($s0)
    s1 = v1 + 0xeb0;                                            // 0x00130ce4: addiu $s1, $v1, 0xeb0
    s2 = 1;                                                     // 0x00130ce8: addiu $s2, $zero, 1
    /* nop */                                                   // 0x00130cec: nop 
label_0x130cf0:
    func_00141ee0();  // 0x141e50                                // 0x00130cf0: jal 0x141e50
    if (v0 != s2) goto label_0x130d0c;                          // 0x00130cf8: bne $v0, $s2, 0x130d0c
    func_00130a08();  // 0x130838                                // 0x00130d00: jal 0x130838
    /* nop */                                                   // 0x00130d04: nop 
    g_00200eb0 = 0;  // Global at 0x00200eb0                    // 0x00130d08: sw $zero, 0($s1)
label_0x130d0c:
    v0 = *(int8_t*)((s0) + 0x41);                               // 0x00130d0c: lb $v0, 0x41($s0)
    if (v0 != 0) goto label_0x130cf0;                           // 0x00130d10: bnez $v0, 0x130cf0
    /* nop */                                                   // 0x00130d14: nop 
    return;                                                     // 0x00130d28: jr $ra
    sp = sp + 0x20;                                             // 0x00130d2c: addiu $sp, $sp, 0x20
}