void func_001cbe20() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001cbe20: addiu $sp, $sp, -0x30
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cbe28: addu.qb $zero, $sp, $s1
    s0 = *(int32_t*)((a0) + 0x1b8);                             // 0x001cbe34: lw $s0, 0x1b8($a0)
    func_001cfd70();  // 0x1cfd60                                // 0x001cbe38: jal 0x1cfd60
    a0 = s1 + 0x14;                                             // 0x001cbe3c: addiu $a0, $s1, 0x14
    v1 = *(int32_t*)((s1) + 0x1bc);                             // 0x001cbe40: lw $v1, 0x1bc($s1)
    v0 = *(int32_t*)((s1) + 0x1b8);                             // 0x001cbe48: lw $v0, 0x1b8($s1)
    a0 = s1 + 0x14;                                             // 0x001cbe4c: addiu $a0, $s1, 0x14
    func_001cfdf0();  // 0x1cfd80                                // 0x001cbe50: jal 0x1cfd80
    a2 = v1 - v0;                                               // 0x001cbe54: subu $a2, $v1, $v0
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cbe5c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cbe60: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cbe64: jr $ra
    sp = sp + 0x30;                                             // 0x001cbe68: addiu $sp, $sp, 0x30
}