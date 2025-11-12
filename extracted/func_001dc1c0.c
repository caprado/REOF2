void func_001dc1c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_2c;
    
    sp = sp + -0x30;                                            // 0x001dc1c0: addiu $sp, $sp, -0x30
    a0 = 0x33 << 16;                                            // 0x001dc1d0: lui $a0, 0x33
    func_001dc598();  // 0x1dc4f0                                // 0x001dc1d4: jal 0x1dc4f0
    a0 = a0 + -0x290;                                           // 0x001dc1d8: addiu $a0, $a0, -0x290
    if (v0 == 0) goto label_0x1dc1ec;                           // 0x001dc1dc: beqz $v0, 0x1dc1ec
    goto label_0x1dc220;                                        // 0x001dc1e4: b 0x1dc220
    v0 = -1;                                                    // 0x001dc1e8: addiu $v0, $zero, -1
label_0x1dc1ec:
    func_001dcac8();  // 0x1dca18                                // 0x001dc1ec: jal 0x1dca18
    a1 = sp + 0x2c;                                             // 0x001dc1f0: addiu $a1, $sp, 0x2c
    v0 = local_2c;                                              // 0x001dc1f4: lw $v0, 0x2c($sp)
    if (v0 == 0) goto label_0x1dc208;                           // 0x001dc1f8: beqz $v0, 0x1dc208
    v0 = 0x33 << 16;                                            // 0x001dc1fc: lui $v0, 0x33
    goto label_0x1dc220;                                        // 0x001dc200: b 0x1dc220
    v0 = -1;                                                    // 0x001dc204: addiu $v0, $zero, -1
label_0x1dc208:
    v0 = v0 + -0x288;                                           // 0x001dc208: addiu $v0, $v0, -0x288
    v0 = v0 + s0;                                               // 0x001dc20c: addu $v0, $v0, $s0
    v0 = g_0032fd78;  // Global at 0x0032fd78                   // 0x001dc210: lbu $v0, 0($v0)
    v0 = v0 ^ 0;                                                // 0x001dc214: xor $v0, $v0, $zero
    v0 = ((unsigned)v0 < (unsigned)1) ? 1 : 0;                  // 0x001dc218: sltiu $v0, $v0, 1
    v0 = -v0;                                                   // 0x001dc21c: negu $v0, $v0
label_0x1dc220:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001dc224: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001dc228: jr $ra
    sp = sp + 0x30;                                             // 0x001dc22c: addiu $sp, $sp, 0x30
}