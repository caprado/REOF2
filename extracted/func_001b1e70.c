void func_001b1e70() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    return func_00107d30();  // Tail call                        // 0x001b1e74: j 0x107c70
    a2 = 0xc84;                                                 // 0x001b1e78: addiu $a2, $zero, 0xc84
    /* nop */                                                   // 0x001b1e7c: nop 
    return func_00107d30();  // Tail call                        // 0x001b1e84: j 0x107c70
    a2 = 0x1f48;                                                // 0x001b1e88: addiu $a2, $zero, 0x1f48
    /* nop */                                                   // 0x001b1e8c: nop 
    return func_00107d30();  // Tail call                        // 0x001b1e94: j 0x107c70
    a2 = 0x3ec;                                                 // 0x001b1e98: addiu $a2, $zero, 0x3ec
    /* nop */                                                   // 0x001b1e9c: nop 
    sp = sp + -0x20;                                            // 0x001b1ea0: addiu $sp, $sp, -0x20
    a0 = 0x4c << 16;                                            // 0x001b1ea4: lui $a0, 0x4c
    a0 = a0 + 0xde0;                                            // 0x001b1eac: addiu $a0, $a0, 0xde0
    func_001b1e80();  // 0x1b1e80                               // 0x001b1eb0: jal 0x1b1e80
    a0 = 0x4c << 16;                                            // 0x001b1eb8: lui $a0, 0x4c
    func_001b1e80();  // 0x1b1e80                               // 0x001b1ebc: jal 0x1b1e80
    a0 = a0 + -0x1170;                                          // 0x001b1ec0: addiu $a0, $a0, -0x1170
    a0 = 0x4c << 16;                                            // 0x001b1ec4: lui $a0, 0x4c
    func_001b1e80();  // 0x1b1e80                               // 0x001b1ec8: jal 0x1b1e80
    a0 = a0 + -0x30c0;                                          // 0x001b1ecc: addiu $a0, $a0, -0x30c0
    v1 = 0x1f48;                                                // 0x001b1ed4: addiu $v1, $zero, 0x1f48
label_0x1b1ed8:
    v0 = 0x4b << 16;                                            // 0x001b1ed8: lui $v0, 0x4b
    /* multiply: s0 * v1 -> hi:lo */                            // 0x001b1edc: mult $ac3, $s0, $v1
    v0 = v0 + -0x2b00;                                          // 0x001b1ee0: addiu $v0, $v0, -0x2b00
    func_001b1e80();  // 0x1b1e80                               // 0x001b1ee4: jal 0x1b1e80
    a0 = v0 + v1;                                               // 0x001b1ee8: addu $a0, $v0, $v1
    s0 = s0 + 1;                                                // 0x001b1eec: addiu $s0, $s0, 1
    v0 = (s0 < 8) ? 1 : 0;                                      // 0x001b1ef0: slti $v0, $s0, 8
    if (v0 != 0) goto label_0x1b1ed8;                           // 0x001b1ef4: bnez $v0, 0x1b1ed8
    v1 = 0x1f48;                                                // 0x001b1ef8: addiu $v1, $zero, 0x1f48
    v1 = 0x1f48;                                                // 0x001b1f00: addiu $v1, $zero, 0x1f48
label_0x1b1f04:
    v0 = 0x4a << 16;                                            // 0x001b1f04: lui $v0, 0x4a
    /* multiply: s0 * v1 -> hi:lo */                            // 0x001b1f08: mult $ac3, $s0, $v1
    v0 = v0 + -0x63d0;                                          // 0x001b1f0c: addiu $v0, $v0, -0x63d0
    func_001b1e80();  // 0x1b1e80                               // 0x001b1f10: jal 0x1b1e80
    a0 = v0 + v1;                                               // 0x001b1f14: addu $a0, $v0, $v1
    s0 = s0 + 1;                                                // 0x001b1f18: addiu $s0, $s0, 1
    v0 = (s0 < 0xa) ? 1 : 0;                                    // 0x001b1f1c: slti $v0, $s0, 0xa
    if (v0 != 0) goto label_0x1b1f04;                           // 0x001b1f20: bnez $v0, 0x1b1f04
    v1 = 0x1f48;                                                // 0x001b1f24: addiu $v1, $zero, 0x1f48
    v1 = 0xc84;                                                 // 0x001b1f2c: addiu $v1, $zero, 0xc84
label_0x1b1f30:
    v0 = 0x49 << 16;                                            // 0x001b1f30: lui $v0, 0x49
    /* multiply: s0 * v1 -> hi:lo */                            // 0x001b1f34: mult $ac3, $s0, $v1
    v0 = v0 + 0x5110;                                           // 0x001b1f38: addiu $v0, $v0, 0x5110
    func_001b1e70();  // 0x1b1e70                               // 0x001b1f3c: jal 0x1b1e70
    a0 = v0 + v1;                                               // 0x001b1f40: addu $a0, $v0, $v1
    s0 = s0 + 1;                                                // 0x001b1f44: addiu $s0, $s0, 1
    v0 = (s0 < 6) ? 1 : 0;                                      // 0x001b1f48: slti $v0, $s0, 6
    if (v0 != 0) goto label_0x1b1f30;                           // 0x001b1f4c: bnez $v0, 0x1b1f30
    v1 = 0xc84;                                                 // 0x001b1f50: addiu $v1, $zero, 0xc84
    v1 = s0 << 6;                                               // 0x001b1f58: sll $v1, $s0, 6
label_0x1b1f5c:
    v0 = 0x49 << 16;                                            // 0x001b1f5c: lui $v0, 0x49
    v1 = v1 - s0;                                               // 0x001b1f60: subu $v1, $v1, $s0
    v0 = v0 + 0x3980;                                           // 0x001b1f64: addiu $v0, $v0, 0x3980
    v1 = v1 << 2;                                               // 0x001b1f68: sll $v1, $v1, 2
    v1 = v1 - s0;                                               // 0x001b1f6c: subu $v1, $v1, $s0
    v1 = v1 << 2;                                               // 0x001b1f70: sll $v1, $v1, 2
    func_001b1e90();  // 0x1b1e90                               // 0x001b1f74: jal 0x1b1e90
    a0 = v0 + v1;                                               // 0x001b1f78: addu $a0, $v0, $v1
    s0 = s0 + 1;                                                // 0x001b1f7c: addiu $s0, $s0, 1
    v1 = (s0 < 6) ? 1 : 0;                                      // 0x001b1f80: slti $v1, $s0, 6
    if (v1 != 0) goto label_0x1b1f5c;                           // 0x001b1f84: bnez $v1, 0x1b1f5c
    v1 = s0 << 6;                                               // 0x001b1f88: sll $v1, $s0, 6
    a2 = 0x41;                                                  // 0x001b1f8c: addiu $a2, $zero, 0x41
    a0 = 0x49 << 16;                                            // 0x001b1f90: lui $a0, 0x49
    a1 = 0xff;                                                  // 0x001b1f94: addiu $a1, $zero, 0xff
    a0 = a0 + 0x1380;                                           // 0x001b1f98: addiu $a0, $a0, 0x1380
label_0x1b1f9c:
    v1 = a0 + a2;                                               // 0x001b1f9c: addu $v1, $a0, $a2
    a2 = a2 + -1;                                               // 0x001b1fa0: addiu $a2, $a2, -1
    *(uint8_t*)(v1) = a1;                                       // 0x001b1fa4: sb $a1, 0($v1)
    /* nop */                                                   // 0x001b1fa8: nop 
    /* nop */                                                   // 0x001b1fac: nop 
    if (a2 >= 0) goto label_0x1b1f9c;                           // 0x001b1fb0: bgez $a2, 0x1b1f9c
    /* nop */                                                   // 0x001b1fb4: nop 
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001b1fbc: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001b1fc0: jr $ra
    sp = sp + 0x20;                                             // 0x001b1fc4: addiu $sp, $sp, 0x20
}