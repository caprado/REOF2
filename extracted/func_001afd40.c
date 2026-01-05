void func_001afd40() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_2c;
    
    sp = sp + -0x30;                                            // 0x001afd40: addiu $sp, $sp, -0x30
    func_001d3cb0();  // 1d3cb0                                // 0x001afd4c: jal 0x1d3cb0
    local_2c = v0;                                              // 0x001afd54: sw $v0, 0x2c($sp)
    v1 = local_2c;                                              // 0x001afd58: lw $v1, 0x2c($sp)
    if (v1 == 0) goto label_0x1afdd0;                           // 0x001afd5c: beqz $v1, 0x1afdd0
    /* nop */                                                   // 0x001afd60: nop 
    func_0018d4c0();  // 18d4c0                                // 0x001afd64: jal 0x18d4c0
    /* nop */                                                   // 0x001afd68: nop 
label_0x1afd70:
    func_001ba2a0();  // 1ba2a0                                // 0x001afd70: jal 0x1ba2a0
    a0 = 1;                                                     // 0x001afd74: addiu $a0, $zero, 1
    a0 = 4;                                                     // 0x001afd78: addiu $a0, $zero, 4
    func_001aea70();  // 1aea70                                // 0x001afd7c: jal 0x1aea70
    a1 = 5;                                                     // 0x001afd80: addiu $a1, $zero, 5
    a0 = 0x63;                                                  // 0x001afd84: addiu $a0, $zero, 0x63
    func_001aefd0();  // 1aefd0                                // 0x001afd88: jal 0x1aefd0
    a1 = 1 << 16;                                               // 0x001afd8c: lui $a1, 1
    a0 = 0x6c;                                                  // 0x001afd90: addiu $a0, $zero, 0x6c
    func_001aefd0();  // 1aefd0                                // 0x001afd94: jal 0x1aefd0
    a0 = 1;                                                     // 0x001afd9c: addiu $a0, $zero, 1
    func_0019d440();  // 19d440                                // 0x001afda0: jal 0x19d440
    a1 = sp + 0x2c;                                             // 0x001afda4: addiu $a1, $sp, 0x2c
    a1 = local_2c;                                              // 0x001afda8: lw $a1, 0x2c($sp)
    func_001aefd0();  // 1aefd0                                // 0x001afdac: jal 0x1aefd0
    a0 = 4;                                                     // 0x001afdb0: addiu $a0, $zero, 4
    a0 = 0x22 << 16;                                            // 0x001afdb4: lui $a0, 0x22
    func_001ab230();  // 1ab230                                // 0x001afdb8: jal 0x1ab230
    a0 = a0 + -0x4060;                                          // 0x001afdbc: addiu $a0, $a0, -0x4060
    s0 = s0 + 1;                                                // 0x001afdc0: addiu $s0, $s0, 1
    v1 = (s0 < 3) ? 1 : 0;                                      // 0x001afdc4: slti $v1, $s0, 3
    if (v1 != 0) goto label_0x1afd70;                           // 0x001afdc8: bnez $v1, 0x1afd70
    /* nop */                                                   // 0x001afdcc: nop 
label_0x1afdd0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001afdd4: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001afdd8: jr $ra
    sp = sp + 0x30;                                             // 0x001afddc: addiu $sp, $sp, 0x30
}