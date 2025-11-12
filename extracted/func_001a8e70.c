void func_001a8e70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x60;                                            // 0x001a8e70: addiu $sp, $sp, -0x60
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001a8e7c: addu.qb $zero, $sp, $s1
    at = ((unsigned)s1 < (unsigned)0xa) ? 1 : 0;                // 0x001a8e84: sltiu $at, $s1, 0xa
    if (at == 0) goto label_0x1a8f38;                           // 0x001a8e88: beqz $at, 0x1a8f38
    a0 = 0x23 << 16;                                            // 0x001a8e90: lui $a0, 0x23
    v1 = s1 << 2;                                               // 0x001a8e94: sll $v1, $s1, 2
    a0 = a0 + -0x5850;                                          // 0x001a8e98: addiu $a0, $a0, -0x5850
    v1 = v1 + a0;                                               // 0x001a8e9c: addu $v1, $v1, $a0
    v1 = *(int32_t*)(v1);                                       // 0x001a8ea0: lw $v1, 0($v1)
    /* jump to address in v1 */                                 // 0x001a8ea4: jr $v1
    /* nop */                                                   // 0x001a8ea8: nop 
    v0 = -1;                                                    // 0x001a8eac: addiu $v0, $zero, -1
    *(uint8_t*)((gp) + -0x7d40) = v0;                           // 0x001a8eb0: sb $v0, -0x7d40($gp)
    *(uint8_t*)((gp) + -0x7d3c) = v0;                           // 0x001a8eb4: sb $v0, -0x7d3c($gp)
    goto label_0x1a8f38;                                        // 0x001a8eb8: b 0x1a8f38
    *(uint8_t*)((gp) + -0x7d38) = v0;                           // 0x001a8ebc: sb $v0, -0x7d38($gp)
    v1 = *(int8_t*)((gp) + -0x7d40);                            // 0x001a8ec0: lb $v1, -0x7d40($gp)
    if (s1 == v1) goto label_0x1a8f9c;                          // 0x001a8ec4: beq $s1, $v1, 0x1a8f9c
    s0 = gp + -0x7d40;                                          // 0x001a8ec8: addiu $s0, $gp, -0x7d40
    v0 = 2;                                                     // 0x001a8ecc: addiu $v0, $zero, 2
    if (s1 != v0) goto label_0x1a8f38;                          // 0x001a8ed0: bne $s1, $v0, 0x1a8f38
    /* nop */                                                   // 0x001a8ed4: nop 
    v0 = -1;                                                    // 0x001a8ed8: addiu $v0, $zero, -1
    goto label_0x1a8f38;                                        // 0x001a8edc: b 0x1a8f38
    *(uint8_t*)((gp) + -0x7d38) = v0;                           // 0x001a8ee0: sb $v0, -0x7d38($gp)
    a0 = *(int8_t*)((gp) + -0x7d40);                            // 0x001a8ee4: lb $a0, -0x7d40($gp)
    v1 = 3;                                                     // 0x001a8ee8: addiu $v1, $zero, 3
    if (a0 == v1) goto label_0x1a8f0c;                          // 0x001a8eec: beq $a0, $v1, 0x1a8f0c
    s0 = gp + -0x7d38;                                          // 0x001a8ef0: addiu $s0, $gp, -0x7d38
    v1 = 1;                                                     // 0x001a8ef4: addiu $v1, $zero, 1
    if (a0 == v1) goto label_0x1a8f08;                          // 0x001a8ef8: beq $a0, $v1, 0x1a8f08
    v1 = -1;                                                    // 0x001a8efc: addiu $v1, $zero, -1
    if (a0 != v1) goto label_0x1a8f9c;                          // 0x001a8f00: bne $a0, $v1, 0x1a8f9c
    /* nop */                                                   // 0x001a8f04: nop 
label_0x1a8f08:
    s0 = gp + -0x7d38;                                          // 0x001a8f08: addiu $s0, $gp, -0x7d38
label_0x1a8f0c:
    goto label_0x1a8f38;                                        // 0x001a8f0c: b 0x1a8f38
    /* nop */                                                   // 0x001a8f10: nop 
    a0 = *(int8_t*)((gp) + -0x7d40);                            // 0x001a8f14: lb $a0, -0x7d40($gp)
    v1 = 3;                                                     // 0x001a8f18: addiu $v1, $zero, 3
    if (a0 != v1) goto label_0x1a8f9c;                          // 0x001a8f1c: bne $a0, $v1, 0x1a8f9c
    s0 = gp + -0x7d38;                                          // 0x001a8f20: addiu $s0, $gp, -0x7d38
    goto label_0x1a8f38;                                        // 0x001a8f24: b 0x1a8f38
    /* nop */                                                   // 0x001a8f28: nop 
    v1 = *(int8_t*)((gp) + -0x7d3c);                            // 0x001a8f2c: lb $v1, -0x7d3c($gp)
    if (s1 == v1) goto label_0x1a8f9c;                          // 0x001a8f30: beq $s1, $v1, 0x1a8f9c
    s0 = gp + -0x7d3c;                                          // 0x001a8f34: addiu $s0, $gp, -0x7d3c
label_0x1a8f38:
    v0 = 0x21 << 16;                                            // 0x001a8f38: lui $v0, 0x21
    a1 = 0x23 << 16;                                            // 0x001a8f3c: lui $a1, 0x23
    v1 = s1 << 2;                                               // 0x001a8f40: sll $v1, $s1, 2
    v0 = v0 + 0x7740;                                           // 0x001a8f44: addiu $v0, $v0, 0x7740
    v0 = v0 + v1;                                               // 0x001a8f48: addu $v0, $v0, $v1
    a0 = sp + 0x40;                                             // 0x001a8f4c: addiu $a0, $sp, 0x40
    s2 = g_00217740;  // Global at 0x00217740                   // 0x001a8f50: lw $s2, 0($v0)
    a1 = &str_0022a798;  // "ROMDATA_AFS"                       // 0x001a8f54: addiu $a1, $a1, -0x5868
    func_0010a570();  // 0x10a4d8                                // 0x001a8f58: jal 0x10a4d8
    a0 = sp + 0x40;                                             // 0x001a8f60: addiu $a0, $sp, 0x40
    func_001a8e70();  // 0x1a8dd0                                // 0x001a8f64: jal 0x1a8dd0
    if (v0 == 0) goto label_0x1a8f9c;                           // 0x001a8f6c: beqz $v0, 0x1a8f9c
    func_001a8dd0();  // 0x1a8d50                                // 0x001a8f74: jal 0x1a8d50
    /* nop */                                                   // 0x001a8f78: nop 
    func_001dd9a0();  // 0x1dd810                                // 0x001a8f80: jal 0x1dd810
    a0 = s1 + 1;                                                // 0x001a8f84: addiu $a0, $s1, 1
    if (s1 == 0) goto label_0x1a8f9c;                           // 0x001a8f88: beqz $s1, 0x1a8f9c
    v1 = 1;                                                     // 0x001a8f8c: addiu $v1, $zero, 1
    if (s2 != v1) goto label_0x1a8f9c;                          // 0x001a8f90: bne $s2, $v1, 0x1a8f9c
    /* nop */                                                   // 0x001a8f94: nop 
    *(uint8_t*)(s0) = s1;                                       // 0x001a8f98: sb $s1, 0($s0)
label_0x1a8f9c:
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001a8fa0: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001a8fa4: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001a8fa8: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001a8fac: jr $ra
    sp = sp + 0x60;                                             // 0x001a8fb0: addiu $sp, $sp, 0x60
}