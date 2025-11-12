void func_001a9b80() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001a9b80: addiu $sp, $sp, -0x30
    at = 0x31 << 16;                                            // 0x001a9b84: lui $at, 0x31
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a9b8c: addu.qb $zero, $sp, $s1
    a0 = g_003137ba;  // Global at 0x003137ba                   // 0x001a9b98: lhu $a0, 0x37ba($at)
    func_001a9b20();  // 0x1a9960                                // 0x001a9b9c: jal 0x1a9960
    a0 = *(int32_t*)((gp) + -0x63e8);                           // 0x001a9ba4: lw $a0, -0x63e8($gp)
    func_001a9770();  // 0x1a9660                                // 0x001a9bb0: jal 0x1a9660
    a3 = 1;                                                     // 0x001a9bb4: addiu $a3, $zero, 1
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a9bbc: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a9bc0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a9bc4: jr $ra
    sp = sp + 0x30;                                             // 0x001a9bc8: addiu $sp, $sp, 0x30
}