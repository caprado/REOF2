void func_001cbd70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x001cbd70: addiu $sp, $sp, -0x30
    v0 = a1 & 0xff;                                             // 0x001cbd74: andi $v0, $a1, 0xff
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001cbd7c: addu.qb $zero, $sp, $s1
    if (v0 != 0) goto label_0x1cbdb8;                           // 0x001cbd88: bnez $v0, 0x1cbdb8
    func_001cbc70();  // 0x1cba20                                // 0x001cbd90: jal 0x1cba20
    /* nop */                                                   // 0x001cbd94: nop 
    if (v0 == 0) goto label_0x1cbe04;                           // 0x001cbd98: beqz $v0, 0x1cbe04
    func_001cbe70();  // 0x1cbe20                                // 0x001cbda0: jal 0x1cbe20
    /* nop */                                                   // 0x001cbda4: nop 
    func_001cbd70();  // 0x1cbc70                                // 0x001cbda8: jal 0x1cbc70
    goto label_0x1cbe04;                                        // 0x001cbdb0: b 0x1cbe04
    s0 = 1;                                                     // 0x001cbdb4: addiu $s0, $zero, 1
label_0x1cbdb8:
    func_001cfa60();  // 0x1cfa00                                // 0x001cbdb8: jal 0x1cfa00
    a0 = s1 + 0x28;                                             // 0x001cbdbc: addiu $a0, $s1, 0x28
    v0 = v0 & 0xff;                                             // 0x001cbdc0: andi $v0, $v0, 0xff
    at = (v0 < 2) ? 1 : 0;                                      // 0x001cbdc4: slti $at, $v0, 2
    if (at == 0) goto label_0x1cbe04;                           // 0x001cbdc8: beqz $at, 0x1cbe04
    func_001cbc70();  // 0x1cba20                                // 0x001cbdd0: jal 0x1cba20
    *(uint16_t*)((s1) + 0x1e0) = 0;                             // 0x001cbdd4: sh $zero, 0x1e0($s1)
    if (v0 == 0) goto label_0x1cbe04;                           // 0x001cbdd8: beqz $v0, 0x1cbe04
    func_001cbe70();  // 0x1cbe20                                // 0x001cbde0: jal 0x1cbe20
    /* nop */                                                   // 0x001cbde4: nop 
    a0 = s1 + 0x28;                                             // 0x001cbde8: addiu $a0, $s1, 0x28
    func_001cfaa0();  // 0x1cfa60                                // 0x001cbdf0: jal 0x1cfa60
    a2 = s1 + 0x14;                                             // 0x001cbdf4: addiu $a2, $s1, 0x14
    func_001cbd70();  // 0x1cbc70                                // 0x001cbdf8: jal 0x1cbc70
    s0 = 1;                                                     // 0x001cbe00: addiu $s0, $zero, 1
label_0x1cbe04:
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001cbe0c: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001cbe10: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001cbe14: jr $ra
    sp = sp + 0x30;                                             // 0x001cbe18: addiu $sp, $sp, 0x30
}