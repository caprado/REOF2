void func_00112170() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4, local_8;
    
    sp = sp + -0x40;                                            // 0x00112170: addiu $sp, $sp, -0x40
    a0 = sp + 0x20;                                             // 0x00112178: addiu $a0, $sp, 0x20
    func_00111738();  // 0x111678                                // 0x00112180: jal 0x111678
    a0 = local_0;                                               // 0x0011218c: lw $a0, 0($sp)
    v1 = a0 ^ 2;                                                // 0x00112190: xori $v1, $a0, 2
    if (v1 == 0) goto label_0x112204;                           // 0x00112194: beqz $v1, 0x112204
    a1 = ((unsigned)a0 < (unsigned)2) ? 1 : 0;                  // 0x00112198: sltiu $a1, $a0, 2
    if (a1 != 0) goto label_0x112208;                           // 0x0011219c: bnez $a1, 0x112208
    v1 = local_4;                                               // 0x001121a4: lw $v1, 4($sp)
    if (v1 != 0) goto label_0x112208;                           // 0x001121a8: bnez $v1, 0x112208
    v1 = a0 ^ 4;                                                // 0x001121ac: xori $v1, $a0, 4
    if (v1 == 0) goto label_0x112208;                           // 0x001121b0: beqz $v1, 0x112208
    v0 = -1;                                                    // 0x001121b4: addiu $v0, $zero, -1
    a0 = local_8;                                               // 0x001121b8: lw $a0, 8($sp)
    if (a0 < 0) goto label_0x112208;                            // 0x001121c0: bltz $a0, 0x112208
    v1 = (a0 < 0x20) ? 1 : 0;                                   // 0x001121c4: slti $v1, $a0, 0x20
    if (v1 == 0) goto label_0x112208;                           // 0x001121c8: beqz $v1, 0x112208
    v0 = -1;                                                    // 0x001121cc: addiu $v0, $zero, -1
    v0 = (a0 < 0x3d) ? 1 : 0;                                   // 0x001121d0: slti $v0, $a0, 0x3d
    if (v0 != 0) goto label_0x1121f0;                           // 0x001121d4: bnez $v0, 0x1121f0
    v1 = 0x3c;                                                  // 0x001121d8: addiu $v1, $zero, 0x3c
    v1 = a0 + -0x3c;                                            // 0x001121e0: addiu $v1, $a0, -0x3c
    goto label_0x1121fc;                                        // 0x001121e4: b 0x1121fc
    /* nop */                                                   // 0x001121ec: nop 
label_0x1121f0:
    v1 = v1 - a0;                                               // 0x001121f4: subu $v1, $v1, $a0
label_0x1121fc:
label_0x112204:
label_0x112208:
    return;                                                     // 0x00112208: jr $ra
    sp = sp + 0x40;                                             // 0x0011220c: addiu $sp, $sp, 0x40
}