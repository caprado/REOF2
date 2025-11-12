void func_00168548() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x00168548: addiu $sp, $sp, -0x30
    func_001580e8();  // 0x1580b0                                // 0x00168560: jal 0x1580b0
    v0 = (s0 < 7) ? 1 : 0;                                      // 0x0016856c: slti $v0, $s0, 7
    v1 = 6;                                                     // 0x00168570: addiu $v1, $zero, 6
    if (v0 != 0) v1 = s0;                                       // 0x00168578: movn $v1, $s0, $v0
    t0 = sp + 4;                                                // 0x00168584: addiu $t0, $sp, 4
    if (s1 == 0) goto label_0x1685ac;                           // 0x0016858c: beqz $s1, 0x1685ac
    v0 = s2 + v1;                                               // 0x00168590: addu $v0, $s2, $v1
    func_00156208();  // 0x1560c0                                // 0x00168594: jal 0x1560c0
    /* nop */                                                   // 0x00168598: nop 
    func_00158278();  // 0x158228                                // 0x0016859c: jal 0x158228
    v0 = local_0;                                               // 0x001685a4: lw $v0, 0($sp)
    v0 = s2 + v0;                                               // 0x001685a8: addu $v0, $s2, $v0
label_0x1685ac:
    return;                                                     // 0x001685bc: jr $ra
    sp = sp + 0x30;                                             // 0x001685c0: addiu $sp, $sp, 0x30
}