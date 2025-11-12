void func_00176db0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    sp = sp + -0x50;                                            // 0x00176db0: addiu $sp, $sp, -0x50
    v0 = 0x21 << 16;                                            // 0x00176db4: lui $v0, 0x21
    a2 = sp + 4;                                                // 0x00176dcc: addiu $a2, $sp, 4
    func_00176060();  // 0x176010                                // 0x00176df0: jal 0x176010
    s5 = v0 + 0x5738;                                           // 0x00176df4: addiu $s5, $v0, 0x5738
    v0 = local_4;                                               // 0x00176df8: lw $v0, 4($sp)
    a2 = 1;                                                     // 0x00176dfc: addiu $a2, $zero, 1
    at = 0x461c << 16;                                          // 0x00176e00: lui $at, 0x461c
    at = at | 0x4000;                                           // 0x00176e04: ori $at, $at, 0x4000
    /* move to FPU: $at, $f3 */                                 // 0x00176e08: mtc1 $at, $f3
    v1 = -2;                                                    // 0x00176e0c: addiu $v1, $zero, -2
    if (v0 != a2) goto label_0x176e48;                          // 0x00176e10: bne $v0, $a2, 0x176e48
    v0 = local_0;                                               // 0x00176e18: lw $v0, 0($sp)
    if (v0 != v1) goto label_0x176e30;                          // 0x00176e1c: bnel $v0, $v1, 0x176e30
    goto label_0x176ed8;                                        // 0x00176e24: b 0x176ed8
    *(uint32_t*)(s1) = a2;                                      // 0x00176e28: sw $a2, 0($s1)
    /* nop */                                                   // 0x00176e2c: nop 
label_0x176e30:
    func_00176f78();  // 0x176f00                                // 0x00176e38: jal 0x176f00
    goto label_0x176edc;                                        // 0x00176e40: b 0x176edc
label_0x176e48:
    v1 = g_00215740;  // Global at 0x00215740                   // 0x00176e48: lw $v1, 8($s5)
    /* move to FPU: $s3, $f0 */                                 // 0x00176e4c: mtc1 $s3, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00176e50: cvt.s.w $f0, $f0
    /* move to FPU: $s4, $f1 */                                 // 0x00176e54: mtc1 $s4, $f1
    /* FPU: cvt.s.w $f1, $f1 */                                 // 0x00176e58: cvt.s.w $f1, $f1
    /* divide: a0 / v1 -> hi:lo */                              // 0x00176e5c: div $zero, $a0, $v1
    /* beqzl $v1, 0x176e68 */                                   // 0x00176e60: beqzl $v1, 0x176e68
    /* break (trap) */                                          // 0x00176e64: break 0, 7
    /* move to FPU: $v0, $f2 */                                 // 0x00176e68: mtc1 $v0, $f2
    /* FPU: cvt.s.w $f2, $f2 */                                 // 0x00176e6c: cvt.s.w $f2, $f2
    v0 = local_0;                                               // 0x00176e70: lw $v0, 0($sp)
    /* FPU: mul.s $f0, $f0, $f3 */                              // 0x00176e74: mul.s $f0, $f0, $f3
    a1 = *(int32_t*)((s2) + 0x9dc);                             // 0x00176e78: lw $a1, 0x9dc($s2)
    /* nop */                                                   // 0x00176e7c: nop 
    /* nop */                                                   // 0x00176e80: nop 
    /* FPU: div.s $f1, $f0, $f1 */                              // 0x00176e84: div.s $f1, $f0, $f1
    /* FPU: mov.s $f12, $f1 */                                  // 0x00176e88: mov.s $f12, $f1
    /* mflo $v1 */                                              // 0x00176e8c
    v0 = v0 + v1;                                               // 0x00176e90: addu $v0, $v0, $v1
    /* move to FPU: $v0, $f0 */                                 // 0x00176e94: mtc1 $v0, $f0
    /* FPU: cvt.s.w $f0, $f0 */                                 // 0x00176e98: cvt.s.w $f0, $f0
    /* FPU: mul.s $f0, $f0, $f3 */                              // 0x00176e9c: mul.s $f0, $f0, $f3
    /* nop */                                                   // 0x00176ea0: nop 
    /* nop */                                                   // 0x00176ea4: nop 
    /* FPU: div.s $f13, $f0, $f2 */                             // 0x00176ea8: div.s $f13, $f0, $f2
    if (a1 == a2) goto label_0x176ec8;                          // 0x00176eac: beq $a1, $a2, 0x176ec8
    local_0 = v0;                                               // 0x00176eb0: sw $v0, 0($sp)
    func_00177068();  // 0x176f78                                // 0x00176eb8: jal 0x176f78
    goto label_0x176edc;                                        // 0x00176ec0: b 0x176edc
label_0x176ec8:
    /* FPU: c.ole.s $f1, $f13 */                                // 0x00176ec8: c.ole.s $f1, $f13
    /* bc1fl 0x176ed8 */                                        // 0x00176ecc: bc1fl 0x176ed8
    *(uint32_t*)(s1) = 0;                                       // 0x00176ed0: sw $zero, 0($s1)
    *(uint32_t*)(s1) = a1;                                      // 0x00176ed4: sw $a1, 0($s1)
label_0x176ed8:
label_0x176edc:
    return;                                                     // 0x00176ef4: jr $ra
    sp = sp + 0x50;                                             // 0x00176ef8: addiu $sp, $sp, 0x50
}