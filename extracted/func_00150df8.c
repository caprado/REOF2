void func_00150df8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00150df8: addiu $sp, $sp, -0x30
    v1 = 1;                                                     // 0x00150dfc: addiu $v1, $zero, 1
    s2 = a0 + 0x128;                                            // 0x00150e0c: addiu $s2, $a0, 0x128
    *(uint32_t*)((s2) + 0x4dc) = v1;                            // 0x00150e20: sw $v1, 0x4dc($s2)
    v0 = *(int32_t*)((s2) + 0x4e4);                             // 0x00150e24: lw $v0, 0x4e4($s2)
    v0 = v0 + 1;                                                // 0x00150e28: addiu $v0, $v0, 1
    func_00150ac0();  // 150ac0                                // 0x00150e2c: jal 0x150ac0
    *(uint32_t*)((s2) + 0x4e4) = v0;                            // 0x00150e30: sw $v0, 0x4e4($s2)
    v0 = -4;                                                    // 0x00150e34: addiu $v0, $zero, -4
    s0 = s3 & v0;                                               // 0x00150e38: and $s0, $s3, $v0
    v1 = s3 - s0;                                               // 0x00150e3c: subu $v1, $s3, $s0
    t0 = *(int8_t*)(s0);                                        // 0x00150e40: lb $t0, 0($s0)
    s0 = s0 + 1;                                                // 0x00150e44: addiu $s0, $s0, 1
    s1 = v1 << 3;                                               // 0x00150e48: sll $s1, $v1, 3
    a0 = *(uint8_t*)(s0);                                       // 0x00150e4c: lbu $a0, 0($s0)
    s0 = s0 + 1;                                                // 0x00150e50: addiu $s0, $s0, 1
    a1 = *(uint8_t*)(s0);                                       // 0x00150e54: lbu $a1, 0($s0)
    s0 = s0 + 1;                                                // 0x00150e58: addiu $s0, $s0, 1
    a2 = *(uint8_t*)(s0);                                       // 0x00150e5c: lbu $a2, 0($s0)
    s0 = s0 + 1;                                                // 0x00150e60: addiu $s0, $s0, 1
    a3 = *(int8_t*)(s0);                                        // 0x00150e64: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00150e68: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x00150e6c: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00150e70: addiu $s0, $s0, 1
    t0 = t0 << 8;                                               // 0x00150e74: sll $t0, $t0, 8
    a3 = a3 << 8;                                               // 0x00150e78: sll $a3, $a3, 8
    t0 = t0 | a0;                                               // 0x00150e7c: or $t0, $t0, $a0
    a3 = a3 | v0;                                               // 0x00150e80: or $a3, $a3, $v0
    v1 = *(uint8_t*)(s0);                                       // 0x00150e84: lbu $v1, 0($s0)
    s0 = s0 + 1;                                                // 0x00150e88: addiu $s0, $s0, 1
    t0 = t0 << 8;                                               // 0x00150e8c: sll $t0, $t0, 8
    a3 = a3 << 8;                                               // 0x00150e90: sll $a3, $a3, 8
    t0 = t0 | a1;                                               // 0x00150e94: or $t0, $t0, $a1
    v0 = *(uint8_t*)(s0);                                       // 0x00150e98: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x00150e9c: or $a3, $a3, $v1
    t0 = t0 << 8;                                               // 0x00150ea0: sll $t0, $t0, 8
    a3 = a3 << 8;                                               // 0x00150ea4: sll $a3, $a3, 8
    t0 = t0 | a2;                                               // 0x00150ea8: or $t0, $t0, $a2
    s0 = s0 + 1;                                                // 0x00150eac: addiu $s0, $s0, 1
    a3 = a3 | v0;                                               // 0x00150eb0: or $a3, $a3, $v0
    if (s1 == 0) goto label_0x150ed8;                           // 0x00150eb4: beqz $s1, 0x150ed8
    t0 = t0 << s1;                                              // 0x00150eb8: sllv $t0, $t0, $s1
    v0 = -s1;                                                   // 0x00150ebc: negu $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x00150ec0: srlv $v0, $a3, $v0
    v0 = t0 | v0;                                               // 0x00150ec4: or $v0, $t0, $v0
    t0 = a3 << s1;                                              // 0x00150ec8: sllv $t0, $a3, $s1
    goto label_0x150ee0;                                        // 0x00150ecc: b 0x150ee0
    *(uint32_t*)(s2) = v0;                                      // 0x00150ed0: sw $v0, 0($s2)
    /* nop */                                                   // 0x00150ed4: nop 
label_0x150ed8:
    *(uint32_t*)(s2) = t0;                                      // 0x00150ed8: sw $t0, 0($s2)
label_0x150ee0:
    a3 = *(int8_t*)(s0);                                        // 0x00150ee0: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00150ee4: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x00150ee8: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00150eec: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00150ef0: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x00150ef4: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x00150ef8: or $a3, $a3, $v0
    v0 = (s1 < 0x14) ? 1 : 0;                                   // 0x00150efc: slti $v0, $s1, 0x14
    s0 = s0 + 1;                                                // 0x00150f00: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00150f04: sll $a3, $a3, 8
    a0 = *(uint8_t*)(s0);                                       // 0x00150f08: lbu $a0, 0($s0)
    s0 = s0 + 1;                                                // 0x00150f0c: addiu $s0, $s0, 1
    a3 = a3 | v1;                                               // 0x00150f10: or $a3, $a3, $v1
    a3 = a3 << 8;                                               // 0x00150f14: sll $a3, $a3, 8
    if (v0 != 0) goto label_0x150f90;                           // 0x00150f18: bnez $v0, 0x150f90
    a3 = a3 | a0;                                               // 0x00150f1c: or $a3, $a3, $a0
    s1 = s1 + -0x14;                                            // 0x00150f20: addiu $s1, $s1, -0x14
    if (s1 == 0) goto label_0x150f48;                           // 0x00150f24: beqz $s1, 0x150f48
    v0 = 0xc;                                                   // 0x00150f28: addiu $v0, $zero, 0xc
    v0 = v0 - s1;                                               // 0x00150f2c: subu $v0, $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x00150f30: srlv $v0, $a3, $v0
    t0 = t0 | v0;                                               // 0x00150f34: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x14;                                  // 0x00150f38: srl $v1, $t0, 0x14
    t0 = a3 << s1;                                              // 0x00150f3c: sllv $t0, $a3, $s1
    goto label_0x150f54;                                        // 0x00150f40: b 0x150f54
    *(uint32_t*)((s2) + 4) = v1;                                // 0x00150f44: sw $v1, 4($s2)
label_0x150f48:
    v0 = (unsigned)t0 >> 0x14;                                  // 0x00150f48: srl $v0, $t0, 0x14
    *(uint32_t*)((s2) + 4) = v0;                                // 0x00150f50: sw $v0, 4($s2)
label_0x150f54:
    a3 = *(int8_t*)(s0);                                        // 0x00150f54: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00150f58: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x00150f5c: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00150f60: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00150f64: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x00150f68: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x00150f6c: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x00150f70: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00150f74: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x00150f78: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x00150f7c: or $a3, $a3, $v1
    s0 = s0 + 1;                                                // 0x00150f80: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00150f84: sll $a3, $a3, 8
    goto label_0x150fa0;                                        // 0x00150f88: b 0x150fa0
    a3 = a3 | v0;                                               // 0x00150f8c: or $a3, $a3, $v0
label_0x150f90:
    v0 = (unsigned)t0 >> 0x14;                                  // 0x00150f90: srl $v0, $t0, 0x14
    t0 = t0 << 0xc;                                             // 0x00150f94: sll $t0, $t0, 0xc
    *(uint32_t*)((s2) + 4) = v0;                                // 0x00150f98: sw $v0, 4($s2)
    s1 = s1 + 0xc;                                              // 0x00150f9c: addiu $s1, $s1, 0xc
label_0x150fa0:
    v0 = (s1 < 0x14) ? 1 : 0;                                   // 0x00150fa0: slti $v0, $s1, 0x14
    if (v0 != 0) goto label_0x151020;                           // 0x00150fa4: bnez $v0, 0x151020
    v0 = (unsigned)t0 >> 0x14;                                  // 0x00150fa8: srl $v0, $t0, 0x14
    s1 = s1 + -0x14;                                            // 0x00150fac: addiu $s1, $s1, -0x14
    if (s1 == 0) goto label_0x150fd8;                           // 0x00150fb0: beqz $s1, 0x150fd8
    v0 = 0xc;                                                   // 0x00150fb4: addiu $v0, $zero, 0xc
    v0 = v0 - s1;                                               // 0x00150fb8: subu $v0, $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x00150fbc: srlv $v0, $a3, $v0
    t0 = t0 | v0;                                               // 0x00150fc0: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x14;                                  // 0x00150fc4: srl $v1, $t0, 0x14
    t0 = a3 << s1;                                              // 0x00150fc8: sllv $t0, $a3, $s1
    goto label_0x150fe4;                                        // 0x00150fcc: b 0x150fe4
    *(uint32_t*)((s2) + 8) = v1;                                // 0x00150fd0: sw $v1, 8($s2)
    /* nop */                                                   // 0x00150fd4: nop 
label_0x150fd8:
    v0 = (unsigned)t0 >> 0x14;                                  // 0x00150fd8: srl $v0, $t0, 0x14
    *(uint32_t*)((s2) + 8) = v0;                                // 0x00150fe0: sw $v0, 8($s2)
label_0x150fe4:
    a3 = *(int8_t*)(s0);                                        // 0x00150fe4: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00150fe8: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x00150fec: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00150ff0: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00150ff4: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x00150ff8: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x00150ffc: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x00151000: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151004: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x00151008: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x0015100c: or $a3, $a3, $v1
    s0 = s0 + 1;                                                // 0x00151010: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151014: sll $a3, $a3, 8
    goto label_0x15102c;                                        // 0x00151018: b 0x15102c
    a3 = a3 | v0;                                               // 0x0015101c: or $a3, $a3, $v0
label_0x151020:
    t0 = t0 << 0xc;                                             // 0x00151020: sll $t0, $t0, 0xc
    *(uint32_t*)((s2) + 8) = v0;                                // 0x00151024: sw $v0, 8($s2)
    s1 = s1 + 0xc;                                              // 0x00151028: addiu $s1, $s1, 0xc
label_0x15102c:
    v0 = (s1 < 0x1c) ? 1 : 0;                                   // 0x0015102c: slti $v0, $s1, 0x1c
    if (v0 != 0) goto label_0x1510a8;                           // 0x00151030: bnez $v0, 0x1510a8
    v0 = (unsigned)t0 >> 0x1c;                                  // 0x00151034: srl $v0, $t0, 0x1c
    s1 = s1 + -0x1c;                                            // 0x00151038: addiu $s1, $s1, -0x1c
    if (s1 == 0) goto label_0x151060;                           // 0x0015103c: beqz $s1, 0x151060
    v0 = 4;                                                     // 0x00151040: addiu $v0, $zero, 4
    v0 = v0 - s1;                                               // 0x00151044: subu $v0, $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x00151048: srlv $v0, $a3, $v0
    t0 = t0 | v0;                                               // 0x0015104c: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1c;                                  // 0x00151050: srl $v1, $t0, 0x1c
    t0 = a3 << s1;                                              // 0x00151054: sllv $t0, $a3, $s1
    goto label_0x15106c;                                        // 0x00151058: b 0x15106c
    *(uint32_t*)((s2) + 0xc) = v1;                              // 0x0015105c: sw $v1, 0xc($s2)
label_0x151060:
    v0 = (unsigned)t0 >> 0x1c;                                  // 0x00151060: srl $v0, $t0, 0x1c
    *(uint32_t*)((s2) + 0xc) = v0;                              // 0x00151068: sw $v0, 0xc($s2)
label_0x15106c:
    a3 = *(int8_t*)(s0);                                        // 0x0015106c: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00151070: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x00151074: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151078: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015107c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x00151080: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x00151084: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x00151088: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015108c: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x00151090: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x00151094: or $a3, $a3, $v1
    s0 = s0 + 1;                                                // 0x00151098: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015109c: sll $a3, $a3, 8
    goto label_0x1510b4;                                        // 0x001510a0: b 0x1510b4
    a3 = a3 | v0;                                               // 0x001510a4: or $a3, $a3, $v0
label_0x1510a8:
    t0 = t0 << 4;                                               // 0x001510a8: sll $t0, $t0, 4
    *(uint32_t*)((s2) + 0xc) = v0;                              // 0x001510ac: sw $v0, 0xc($s2)
    s1 = s1 + 4;                                                // 0x001510b0: addiu $s1, $s1, 4
label_0x1510b4:
    v0 = (s1 < 0x1c) ? 1 : 0;                                   // 0x001510b4: slti $v0, $s1, 0x1c
    if (v0 != 0) goto label_0x151130;                           // 0x001510b8: bnez $v0, 0x151130
    v0 = (unsigned)t0 >> 0x1c;                                  // 0x001510bc: srl $v0, $t0, 0x1c
    s1 = s1 + -0x1c;                                            // 0x001510c0: addiu $s1, $s1, -0x1c
    if (s1 == 0) goto label_0x1510e8;                           // 0x001510c4: beqz $s1, 0x1510e8
    v0 = 4;                                                     // 0x001510c8: addiu $v0, $zero, 4
    v0 = v0 - s1;                                               // 0x001510cc: subu $v0, $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x001510d0: srlv $v0, $a3, $v0
    t0 = t0 | v0;                                               // 0x001510d4: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1c;                                  // 0x001510d8: srl $v1, $t0, 0x1c
    t0 = a3 << s1;                                              // 0x001510dc: sllv $t0, $a3, $s1
    goto label_0x1510f4;                                        // 0x001510e0: b 0x1510f4
    *(uint32_t*)((s2) + 0x10) = v1;                             // 0x001510e4: sw $v1, 0x10($s2)
label_0x1510e8:
    v0 = (unsigned)t0 >> 0x1c;                                  // 0x001510e8: srl $v0, $t0, 0x1c
    *(uint32_t*)((s2) + 0x10) = v0;                             // 0x001510f0: sw $v0, 0x10($s2)
label_0x1510f4:
    a3 = *(int8_t*)(s0);                                        // 0x001510f4: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x001510f8: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x001510fc: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151100: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151104: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x00151108: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x0015110c: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x00151110: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151114: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x00151118: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x0015111c: or $a3, $a3, $v1
    s0 = s0 + 1;                                                // 0x00151120: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151124: sll $a3, $a3, 8
    goto label_0x15113c;                                        // 0x00151128: b 0x15113c
    a3 = a3 | v0;                                               // 0x0015112c: or $a3, $a3, $v0
label_0x151130:
    t0 = t0 << 4;                                               // 0x00151130: sll $t0, $t0, 4
    *(uint32_t*)((s2) + 0x10) = v0;                             // 0x00151134: sw $v0, 0x10($s2)
    s1 = s1 + 4;                                                // 0x00151138: addiu $s1, $s1, 4
label_0x15113c:
    v0 = (s1 < 0xe) ? 1 : 0;                                    // 0x0015113c: slti $v0, $s1, 0xe
    if (v0 != 0) goto label_0x1511b8;                           // 0x00151140: bnez $v0, 0x1511b8
    v0 = (unsigned)t0 >> 0xe;                                   // 0x00151144: srl $v0, $t0, 0xe
    s1 = s1 + -0xe;                                             // 0x00151148: addiu $s1, $s1, -0xe
    if (s1 == 0) goto label_0x151170;                           // 0x0015114c: beqz $s1, 0x151170
    v0 = 0x12;                                                  // 0x00151150: addiu $v0, $zero, 0x12
    v0 = v0 - s1;                                               // 0x00151154: subu $v0, $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x00151158: srlv $v0, $a3, $v0
    t0 = t0 | v0;                                               // 0x0015115c: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0xe;                                   // 0x00151160: srl $v1, $t0, 0xe
    t0 = a3 << s1;                                              // 0x00151164: sllv $t0, $a3, $s1
    goto label_0x15117c;                                        // 0x00151168: b 0x15117c
    *(uint32_t*)((s2) + 0x14) = v1;                             // 0x0015116c: sw $v1, 0x14($s2)
label_0x151170:
    v0 = (unsigned)t0 >> 0xe;                                   // 0x00151170: srl $v0, $t0, 0xe
    *(uint32_t*)((s2) + 0x14) = v0;                             // 0x00151178: sw $v0, 0x14($s2)
label_0x15117c:
    a3 = *(int8_t*)(s0);                                        // 0x0015117c: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00151180: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x00151184: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151188: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015118c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x00151190: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x00151194: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x00151198: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015119c: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x001511a0: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x001511a4: or $a3, $a3, $v1
    s0 = s0 + 1;                                                // 0x001511a8: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x001511ac: sll $a3, $a3, 8
    goto label_0x1511c4;                                        // 0x001511b0: b 0x1511c4
    a3 = a3 | v0;                                               // 0x001511b4: or $a3, $a3, $v0
label_0x1511b8:
    t0 = t0 << 0x12;                                            // 0x001511b8: sll $t0, $t0, 0x12
    *(uint32_t*)((s2) + 0x14) = v0;                             // 0x001511bc: sw $v0, 0x14($s2)
    s1 = s1 + 0x12;                                             // 0x001511c0: addiu $s1, $s1, 0x12
label_0x1511c4:
    v0 = (s1 < 0x1f) ? 1 : 0;                                   // 0x001511c4: slti $v0, $s1, 0x1f
    if (v0 != 0) goto label_0x151240;                           // 0x001511c8: bnez $v0, 0x151240
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x001511cc: srl $v0, $t0, 0x1f
    s1 = s1 + -0x1f;                                            // 0x001511d0: addiu $s1, $s1, -0x1f
    if (s1 == 0) goto label_0x1511f8;                           // 0x001511d4: beqz $s1, 0x1511f8
    v0 = 1;                                                     // 0x001511d8: addiu $v0, $zero, 1
    v0 = v0 - s1;                                               // 0x001511dc: subu $v0, $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x001511e0: srlv $v0, $a3, $v0
    t0 = t0 | v0;                                               // 0x001511e4: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1f;                                  // 0x001511e8: srl $v1, $t0, 0x1f
    t0 = a3 << s1;                                              // 0x001511ec: sllv $t0, $a3, $s1
    goto label_0x151204;                                        // 0x001511f0: b 0x151204
    *(uint32_t*)((s2) + 0x18) = v1;                             // 0x001511f4: sw $v1, 0x18($s2)
label_0x1511f8:
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x001511f8: srl $v0, $t0, 0x1f
    *(uint32_t*)((s2) + 0x18) = v0;                             // 0x00151200: sw $v0, 0x18($s2)
label_0x151204:
    a3 = *(int8_t*)(s0);                                        // 0x00151204: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00151208: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x0015120c: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151210: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151214: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x00151218: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x0015121c: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x00151220: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151224: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x00151228: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x0015122c: or $a3, $a3, $v1
    s0 = s0 + 1;                                                // 0x00151230: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151234: sll $a3, $a3, 8
    goto label_0x15124c;                                        // 0x00151238: b 0x15124c
    a3 = a3 | v0;                                               // 0x0015123c: or $a3, $a3, $v0
label_0x151240:
    t0 = t0 << 1;                                               // 0x00151240: sll $t0, $t0, 1
    *(uint32_t*)((s2) + 0x18) = v0;                             // 0x00151244: sw $v0, 0x18($s2)
    s1 = s1 + 1;                                                // 0x00151248: addiu $s1, $s1, 1
label_0x15124c:
    v0 = (s1 < 0x16) ? 1 : 0;                                   // 0x0015124c: slti $v0, $s1, 0x16
    if (v0 != 0) goto label_0x1512c8;                           // 0x00151250: bnez $v0, 0x1512c8
    v0 = (unsigned)t0 >> 0x16;                                  // 0x00151254: srl $v0, $t0, 0x16
    s1 = s1 + -0x16;                                            // 0x00151258: addiu $s1, $s1, -0x16
    if (s1 == 0) goto label_0x151280;                           // 0x0015125c: beqz $s1, 0x151280
    v0 = 0xa;                                                   // 0x00151260: addiu $v0, $zero, 0xa
    v0 = v0 - s1;                                               // 0x00151264: subu $v0, $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x00151268: srlv $v0, $a3, $v0
    t0 = t0 | v0;                                               // 0x0015126c: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x16;                                  // 0x00151270: srl $v1, $t0, 0x16
    t0 = a3 << s1;                                              // 0x00151274: sllv $t0, $a3, $s1
    goto label_0x15128c;                                        // 0x00151278: b 0x15128c
    *(uint32_t*)((s2) + 0x1c) = v1;                             // 0x0015127c: sw $v1, 0x1c($s2)
label_0x151280:
    v0 = (unsigned)t0 >> 0x16;                                  // 0x00151280: srl $v0, $t0, 0x16
    *(uint32_t*)((s2) + 0x1c) = v0;                             // 0x00151288: sw $v0, 0x1c($s2)
label_0x15128c:
    a3 = *(int8_t*)(s0);                                        // 0x0015128c: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00151290: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x00151294: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151298: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015129c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x001512a0: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x001512a4: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x001512a8: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x001512ac: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x001512b0: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x001512b4: or $a3, $a3, $v1
    s0 = s0 + 1;                                                // 0x001512b8: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x001512bc: sll $a3, $a3, 8
    goto label_0x1512d4;                                        // 0x001512c0: b 0x1512d4
    a3 = a3 | v0;                                               // 0x001512c4: or $a3, $a3, $v0
label_0x1512c8:
    t0 = t0 << 0xa;                                             // 0x001512c8: sll $t0, $t0, 0xa
    *(uint32_t*)((s2) + 0x1c) = v0;                             // 0x001512cc: sw $v0, 0x1c($s2)
    s1 = s1 + 0xa;                                              // 0x001512d0: addiu $s1, $s1, 0xa
label_0x1512d4:
    v0 = (s1 < 0x1f) ? 1 : 0;                                   // 0x001512d4: slti $v0, $s1, 0x1f
    if (v0 != 0) goto label_0x151350;                           // 0x001512d8: bnez $v0, 0x151350
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x001512dc: srl $v0, $t0, 0x1f
    s1 = s1 + -0x1f;                                            // 0x001512e0: addiu $s1, $s1, -0x1f
    if (s1 == 0) goto label_0x151308;                           // 0x001512e4: beqz $s1, 0x151308
    v0 = 1;                                                     // 0x001512e8: addiu $v0, $zero, 1
    v0 = v0 - s1;                                               // 0x001512ec: subu $v0, $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x001512f0: srlv $v0, $a3, $v0
    t0 = t0 | v0;                                               // 0x001512f4: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1f;                                  // 0x001512f8: srl $v1, $t0, 0x1f
    t0 = a3 << s1;                                              // 0x001512fc: sllv $t0, $a3, $s1
    goto label_0x151314;                                        // 0x00151300: b 0x151314
    *(uint32_t*)((s2) + 0x20) = v1;                             // 0x00151304: sw $v1, 0x20($s2)
label_0x151308:
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00151308: srl $v0, $t0, 0x1f
    *(uint32_t*)((s2) + 0x20) = v0;                             // 0x00151310: sw $v0, 0x20($s2)
label_0x151314:
    a3 = *(int8_t*)(s0);                                        // 0x00151314: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00151318: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x0015131c: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151320: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151324: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x00151328: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x0015132c: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x00151330: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151334: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x00151338: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x0015133c: or $a3, $a3, $v1
    s0 = s0 + 1;                                                // 0x00151340: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x00151344: sll $a3, $a3, 8
    goto label_0x15135c;                                        // 0x00151348: b 0x15135c
    a3 = a3 | v0;                                               // 0x0015134c: or $a3, $a3, $v0
label_0x151350:
    t0 = t0 << 1;                                               // 0x00151350: sll $t0, $t0, 1
    *(uint32_t*)((s2) + 0x20) = v0;                             // 0x00151354: sw $v0, 0x20($s2)
    s1 = s1 + 1;                                                // 0x00151358: addiu $s1, $s1, 1
label_0x15135c:
    v0 = (s1 < 0x1f) ? 1 : 0;                                   // 0x0015135c: slti $v0, $s1, 0x1f
    if (v0 != 0) goto label_0x1513d8;                           // 0x00151360: bnez $v0, 0x1513d8
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00151364: srl $v0, $t0, 0x1f
    s1 = s1 + -0x1f;                                            // 0x00151368: addiu $s1, $s1, -0x1f
    if (s1 == 0) goto label_0x151390;                           // 0x0015136c: beqz $s1, 0x151390
    v0 = 1;                                                     // 0x00151370: addiu $v0, $zero, 1
    v0 = v0 - s1;                                               // 0x00151374: subu $v0, $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x00151378: srlv $v0, $a3, $v0
    t0 = t0 | v0;                                               // 0x0015137c: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1f;                                  // 0x00151380: srl $v1, $t0, 0x1f
    t0 = a3 << s1;                                              // 0x00151384: sllv $t0, $a3, $s1
    goto label_0x15139c;                                        // 0x00151388: b 0x15139c
    *(uint32_t*)((s2) + 0x24) = v1;                             // 0x0015138c: sw $v1, 0x24($s2)
label_0x151390:
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00151390: srl $v0, $t0, 0x1f
    *(uint32_t*)((s2) + 0x24) = v0;                             // 0x00151398: sw $v0, 0x24($s2)
label_0x15139c:
    a3 = *(int8_t*)(s0);                                        // 0x0015139c: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x001513a0: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x001513a4: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x001513a8: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x001513ac: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x001513b0: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x001513b4: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x001513b8: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x001513bc: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x001513c0: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x001513c4: or $a3, $a3, $v1
    s0 = s0 + 1;                                                // 0x001513c8: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x001513cc: sll $a3, $a3, 8
    goto label_0x1513e4;                                        // 0x001513d0: b 0x1513e4
    a3 = a3 | v0;                                               // 0x001513d4: or $a3, $a3, $v0
label_0x1513d8:
    t0 = t0 << 1;                                               // 0x001513d8: sll $t0, $t0, 1
    *(uint32_t*)((s2) + 0x24) = v0;                             // 0x001513dc: sw $v0, 0x24($s2)
    s1 = s1 + 1;                                                // 0x001513e0: addiu $s1, $s1, 1
label_0x1513e4:
    v0 = *(int32_t*)((s2) + 0x24);                              // 0x001513e4: lw $v0, 0x24($s2)
    if (v0 == 0) goto label_0x151454;                           // 0x001513e8: beqz $v0, 0x151454
    v0 = (s1 < 0x1f) ? 1 : 0;                                   // 0x001513ec: slti $v0, $s1, 0x1f
    a0 = 0x3f;                                                  // 0x001513f0: addiu $a0, $zero, 0x3f
    s1 = s1 + 8;                                                // 0x001513f4: addiu $s1, $s1, 8
label_0x1513f8:
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x001513f8: slti $v0, $s1, 0x20
    /* bnezl $v0, 0x151444 */                                   // 0x001513fc: bnezl $v0, 0x151444
    t0 = t0 << 8;                                               // 0x00151400: sll $t0, $t0, 8
    s1 = s1 + -0x20;                                            // 0x00151404: addiu $s1, $s1, -0x20
    t0 = a3 << s1;                                              // 0x00151408: sllv $t0, $a3, $s1
    a3 = *(int8_t*)(s0);                                        // 0x0015140c: lb $a3, 0($s0)
    s0 = s0 + 1;                                                // 0x00151410: addiu $s0, $s0, 1
    v0 = *(uint8_t*)(s0);                                       // 0x00151414: lbu $v0, 0($s0)
    s0 = s0 + 1;                                                // 0x00151418: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015141c: sll $a3, $a3, 8
    v1 = *(uint8_t*)(s0);                                       // 0x00151420: lbu $v1, 0($s0)
    a3 = a3 | v0;                                               // 0x00151424: or $a3, $a3, $v0
    s0 = s0 + 1;                                                // 0x00151428: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015142c: sll $a3, $a3, 8
    v0 = *(uint8_t*)(s0);                                       // 0x00151430: lbu $v0, 0($s0)
    a3 = a3 | v1;                                               // 0x00151434: or $a3, $a3, $v1
    s0 = s0 + 1;                                                // 0x00151438: addiu $s0, $s0, 1
    a3 = a3 << 8;                                               // 0x0015143c: sll $a3, $a3, 8
    a3 = a3 | v0;                                               // 0x00151440: or $a3, $a3, $v0
    a0 = a0 + -1;                                               // 0x00151444: addiu $a0, $a0, -1
    if (a0 >= 0) goto label_0x1513f8;                           // 0x00151448: bgezl $a0, 0x1513f8
    s1 = s1 + 8;                                                // 0x0015144c: addiu $s1, $s1, 8
    v0 = (s1 < 0x1f) ? 1 : 0;                                   // 0x00151450: slti $v0, $s1, 0x1f
label_0x151454:
    if (v0 != 0) goto label_0x151490;                           // 0x00151454: bnez $v0, 0x151490
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00151458: srl $v0, $t0, 0x1f
    s1 = s1 + -0x1f;                                            // 0x0015145c: addiu $s1, $s1, -0x1f
    if (s1 == 0) goto label_0x151480;                           // 0x00151460: beqz $s1, 0x151480
    v0 = 1;                                                     // 0x00151464: addiu $v0, $zero, 1
    v0 = v0 - s1;                                               // 0x00151468: subu $v0, $v0, $s1
    v0 = (unsigned)a3 >> v0;                                    // 0x0015146c: srlv $v0, $a3, $v0
    t0 = t0 | v0;                                               // 0x00151470: or $t0, $t0, $v0
    v1 = (unsigned)t0 >> 0x1f;                                  // 0x00151474: srl $v1, $t0, 0x1f
    goto label_0x151488;                                        // 0x00151478: b 0x151488
    *(uint32_t*)((s2) + 0x28) = v1;                             // 0x0015147c: sw $v1, 0x28($s2)
label_0x151480:
    v0 = (unsigned)t0 >> 0x1f;                                  // 0x00151480: srl $v0, $t0, 0x1f
    *(uint32_t*)((s2) + 0x28) = v0;                             // 0x00151484: sw $v0, 0x28($s2)
label_0x151488:
    goto label_0x151498;                                        // 0x00151488: b 0x151498
    s0 = s0 + 4;                                                // 0x0015148c: addiu $s0, $s0, 4
label_0x151490:
    s1 = s1 + 1;                                                // 0x00151490: addiu $s1, $s1, 1
    *(uint32_t*)((s2) + 0x28) = v0;                             // 0x00151494: sw $v0, 0x28($s2)
label_0x151498:
    v0 = *(int32_t*)((s2) + 0x28);                              // 0x00151498: lw $v0, 0x28($s2)
    if (v0 == 0) goto label_0x1514cc;                           // 0x0015149c: beqz $v0, 0x1514cc
    v1 = 0x3f;                                                  // 0x001514a0: addiu $v1, $zero, 0x3f
    s1 = s1 + 8;                                                // 0x001514a4: addiu $s1, $s1, 8
label_0x1514a8:
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x001514a8: slti $v0, $s1, 0x20
    if (v0 != 0) goto label_0x1514bc;                           // 0x001514ac: bnez $v0, 0x1514bc
    v1 = v1 + -1;                                               // 0x001514b0: addiu $v1, $v1, -1
    s1 = s1 + -0x20;                                            // 0x001514b4: addiu $s1, $s1, -0x20
    s0 = s0 + 4;                                                // 0x001514b8: addiu $s0, $s0, 4
label_0x1514bc:
    /* nop */                                                   // 0x001514bc: nop 
    /* nop */                                                   // 0x001514c0: nop 
    if (v1 >= 0) goto label_0x1514a8;                           // 0x001514c4: bgezl $v1, 0x1514a8
    s1 = s1 + 8;                                                // 0x001514c8: addiu $s1, $s1, 8
label_0x1514cc:
    func_00150ac8();  // 150ac8                                // 0x001514cc: jal 0x150ac8
    func_00150b90();  // 150b90                                // 0x001514d4: jal 0x150b90
    func_00150df0();  // 150df0                                // 0x001514dc: jal 0x150df0
    a0 = 0x10;                                                  // 0x001514e4: addiu $a0, $zero, 0x10
    v1 = s0 - s3;                                               // 0x001514e8: subu $v1, $s0, $s3
    v1 = v1 << 3;                                               // 0x001514f0: sll $v1, $v1, 3
    v0 = 1;                                                     // 0x001514f4: addiu $v0, $zero, 1
    v1 = s1 + v1;                                               // 0x001514f8: addu $v1, $s1, $v1
    *(uint32_t*)((s2) + 0x32c) = v0;                            // 0x00151500: sw $v0, 0x32c($s2)
    v0 = v1 + -0x39;                                            // 0x00151504: addiu $v0, $v1, -0x39
    *(uint32_t*)((s2) + 0x328) = a0;                            // 0x00151508: sw $a0, 0x328($s2)
    a0 = (v0 < 0) ? 1 : 0;                                      // 0x0015150c: slti $a0, $v0, 0
    v1 = v1 + -0x32;                                            // 0x00151510: addiu $v1, $v1, -0x32
    if (a0 != 0) v0 = v1;                                       // 0x00151518: movn $v0, $v1, $a0
    v0 = v0 >> 3;                                               // 0x00151520: sra $v0, $v0, 3
    v0 = s3 + v0;                                               // 0x00151524: addu $v0, $s3, $v0
    return;                                                     // 0x0015152c: jr $ra
    sp = sp + 0x30;                                             // 0x00151530: addiu $sp, $sp, 0x30
}