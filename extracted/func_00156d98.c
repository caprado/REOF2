void func_00156d98() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = -4;                                                    // 0x00156d9c: addiu $v1, $zero, -4
    v0 = t4 + 3;                                                // 0x00156da0: addiu $v0, $t4, 3
    t1 = v0 & v1;                                               // 0x00156da8: and $t1, $v0, $v1
    v1 = t4 - t1;                                               // 0x00156db0: subu $v1, $t4, $t1
    t2 = *(int8_t*)(t1);                                        // 0x00156db4: lb $t2, 0($t1)
    t1 = t1 + 1;                                                // 0x00156db8: addiu $t1, $t1, 1
    v1 = v1 + 3;                                                // 0x00156dbc: addiu $v1, $v1, 3
    a0 = *(uint8_t*)(t1);                                       // 0x00156dc0: lbu $a0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156dc4: addiu $t1, $t1, 1
    a1 = *(uint8_t*)(t1);                                       // 0x00156dc8: lbu $a1, 0($t1)
    t1 = t1 + 1;                                                // 0x00156dcc: addiu $t1, $t1, 1
    a2 = *(uint8_t*)(t1);                                       // 0x00156dd0: lbu $a2, 0($t1)
    t1 = t1 + 1;                                                // 0x00156dd4: addiu $t1, $t1, 1
    t0 = *(int8_t*)(t1);                                        // 0x00156dd8: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156ddc: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x00156de0: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156de4: addiu $t1, $t1, 1
    t2 = t2 << 8;                                               // 0x00156de8: sll $t2, $t2, 8
    t0 = t0 << 8;                                               // 0x00156dec: sll $t0, $t0, 8
    t2 = t2 | a0;                                               // 0x00156df0: or $t2, $t2, $a0
    a0 = *(uint8_t*)(t1);                                       // 0x00156df4: lbu $a0, 0($t1)
    t0 = t0 | v0;                                               // 0x00156df8: or $t0, $t0, $v0
    t2 = t2 << 8;                                               // 0x00156dfc: sll $t2, $t2, 8
    t1 = t1 + 1;                                                // 0x00156e00: addiu $t1, $t1, 1
    t2 = t2 | a1;                                               // 0x00156e04: or $t2, $t2, $a1
    t0 = t0 << 8;                                               // 0x00156e08: sll $t0, $t0, 8
    t2 = t2 << 8;                                               // 0x00156e0c: sll $t2, $t2, 8
    a1 = v1 << 3;                                               // 0x00156e10: sll $a1, $v1, 3
    v1 = *(uint8_t*)(t1);                                       // 0x00156e14: lbu $v1, 0($t1)
    t0 = t0 | a0;                                               // 0x00156e18: or $t0, $t0, $a0
    t2 = t2 | a2;                                               // 0x00156e1c: or $t2, $t2, $a2
    t0 = t0 << 8;                                               // 0x00156e20: sll $t0, $t0, 8
    v0 = (a1 < 0x18) ? 1 : 0;                                   // 0x00156e24: slti $v0, $a1, 0x18
    t0 = t0 | v1;                                               // 0x00156e28: or $t0, $t0, $v1
    t2 = t2 << a1;                                              // 0x00156e2c: sllv $t2, $t2, $a1
    if (v0 != 0) goto label_0x156ea8;                           // 0x00156e30: bnez $v0, 0x156ea8
    t1 = t1 + 1;                                                // 0x00156e34: addiu $t1, $t1, 1
    a1 = a1 + -0x18;                                            // 0x00156e38: addiu $a1, $a1, -0x18
    if (a1 == 0) goto label_0x156e60;                           // 0x00156e3c: beqz $a1, 0x156e60
    v0 = 8;                                                     // 0x00156e40: addiu $v0, $zero, 8
    v0 = v0 - a1;                                               // 0x00156e44: subu $v0, $v0, $a1
    v0 = (unsigned)t0 >> v0;                                    // 0x00156e48: srlv $v0, $t0, $v0
    t2 = t2 | v0;                                               // 0x00156e4c: or $t2, $t2, $v0
    a2 = (unsigned)t2 >> 0x18;                                  // 0x00156e50: srl $a2, $t2, 0x18
    goto label_0x156e68;                                        // 0x00156e54: b 0x156e68
    t2 = t0 << a1;                                              // 0x00156e58: sllv $t2, $t0, $a1
    /* nop */                                                   // 0x00156e5c: nop 
label_0x156e60:
    a2 = (unsigned)t2 >> 0x18;                                  // 0x00156e60: srl $a2, $t2, 0x18
label_0x156e68:
    t0 = *(int8_t*)(t1);                                        // 0x00156e68: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156e6c: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x00156e70: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156e74: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156e78: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x00156e7c: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x00156e80: or $t0, $t0, $v0
    t1 = t1 + 1;                                                // 0x00156e84: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156e88: sll $t0, $t0, 8
    v0 = *(uint8_t*)(t1);                                       // 0x00156e8c: lbu $v0, 0($t1)
    t0 = t0 | v1;                                               // 0x00156e90: or $t0, $t0, $v1
    t1 = t1 + 1;                                                // 0x00156e94: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156e98: sll $t0, $t0, 8
    goto label_0x156eb4;                                        // 0x00156e9c: b 0x156eb4
    t0 = t0 | v0;                                               // 0x00156ea0: or $t0, $t0, $v0
    /* nop */                                                   // 0x00156ea4: nop 
label_0x156ea8:
    a2 = (unsigned)t2 >> 0x18;                                  // 0x00156ea8: srl $a2, $t2, 0x18
    t2 = t2 << 8;                                               // 0x00156eac: sll $t2, $t2, 8
    a1 = a1 + 8;                                                // 0x00156eb0: addiu $a1, $a1, 8
label_0x156eb4:
    v1 = a2 + -0xe0;                                            // 0x00156eb4: addiu $v1, $a2, -0xe0
    *(uint32_t*)(t3) = a2;                                      // 0x00156eb8: sw $a2, 0($t3)
    v0 = ((unsigned)v1 < (unsigned)0x10) ? 1 : 0;               // 0x00156ebc: sltiu $v0, $v1, 0x10
    if (v0 != 0) goto label_0x156f18;                           // 0x00156ec0: bnez $v0, 0x156f18
    a0 = 1;                                                     // 0x00156ec4: addiu $a0, $zero, 1
    v1 = a2 + -0xc0;                                            // 0x00156ec8: addiu $v1, $a2, -0xc0
    v0 = ((unsigned)v1 < (unsigned)0x20) ? 1 : 0;               // 0x00156ecc: sltiu $v0, $v1, 0x20
    if (v0 != 0) goto label_0x156f18;                           // 0x00156ed0: bnez $v0, 0x156f18
    v0 = 0xbd;                                                  // 0x00156ed8: addiu $v0, $zero, 0xbd
    if (a2 != v0) goto label_0x156ef0;                          // 0x00156edc: bne $a2, $v0, 0x156ef0
    v0 = 0xbf;                                                  // 0x00156ee0: addiu $v0, $zero, 0xbf
    a0 = 2;                                                     // 0x00156ee4: addiu $a0, $zero, 2
    goto label_0x156f18;                                        // 0x00156ee8: b 0x156f18
    v1 = 1;                                                     // 0x00156eec: addiu $v1, $zero, 1
label_0x156ef0:
    if (a2 != v0) goto label_0x156f08;                          // 0x00156ef0: bne $a2, $v0, 0x156f08
    v0 = 0xbe;                                                  // 0x00156ef4: addiu $v0, $zero, 0xbe
    a0 = 2;                                                     // 0x00156ef8: addiu $a0, $zero, 2
    goto label_0x156f18;                                        // 0x00156efc: b 0x156f18
    v1 = 2;                                                     // 0x00156f00: addiu $v1, $zero, 2
    /* nop */                                                   // 0x00156f04: nop 
label_0x156f08:
    if (a2 != v0) goto label_0x156f14;                          // 0x00156f08: bnel $a2, $v0, 0x156f14
    a0 = 4;                                                     // 0x00156f0c: addiu $a0, $zero, 4
    a0 = 3;                                                     // 0x00156f10: addiu $a0, $zero, 3
label_0x156f14:
label_0x156f18:
    v0 = 2;                                                     // 0x00156f18: addiu $v0, $zero, 2
    *(uint32_t*)((t3) + 4) = a0;                                // 0x00156f1c: sw $a0, 4($t3)
    if (a3 != v0) goto label_0x156fc0;                          // 0x00156f20: bne $a3, $v0, 0x156fc0
    *(uint32_t*)((t3) + 8) = v1;                                // 0x00156f24: sw $v1, 8($t3)
    v0 = (a1 < 0x10) ? 1 : 0;                                   // 0x00156f28: slti $v0, $a1, 0x10
    if (v0 != 0) goto label_0x156fa8;                           // 0x00156f2c: bnez $v0, 0x156fa8
    v0 = (unsigned)t2 >> 0x10;                                  // 0x00156f30: srl $v0, $t2, 0x10
    a1 = a1 + -0x10;                                            // 0x00156f34: addiu $a1, $a1, -0x10
    if (a1 == 0) goto label_0x156f60;                           // 0x00156f38: beqz $a1, 0x156f60
    v0 = 0x10;                                                  // 0x00156f3c: addiu $v0, $zero, 0x10
    v0 = v0 - a1;                                               // 0x00156f40: subu $v0, $v0, $a1
    v0 = (unsigned)t0 >> v0;                                    // 0x00156f44: srlv $v0, $t0, $v0
    t2 = t2 | v0;                                               // 0x00156f48: or $t2, $t2, $v0
    v1 = (unsigned)t2 >> 0x10;                                  // 0x00156f4c: srl $v1, $t2, 0x10
    t2 = t0 << a1;                                              // 0x00156f50: sllv $t2, $t0, $a1
    goto label_0x156f6c;                                        // 0x00156f54: b 0x156f6c
    *(uint32_t*)((t3) + 0xc) = v1;                              // 0x00156f58: sw $v1, 0xc($t3)
    /* nop */                                                   // 0x00156f5c: nop 
label_0x156f60:
    v0 = (unsigned)t2 >> 0x10;                                  // 0x00156f60: srl $v0, $t2, 0x10
    *(uint32_t*)((t3) + 0xc) = v0;                              // 0x00156f68: sw $v0, 0xc($t3)
label_0x156f6c:
    t0 = *(int8_t*)(t1);                                        // 0x00156f6c: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156f70: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x00156f74: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156f78: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156f7c: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x00156f80: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x00156f84: or $t0, $t0, $v0
    t1 = t1 + 1;                                                // 0x00156f88: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156f8c: sll $t0, $t0, 8
    v0 = *(uint8_t*)(t1);                                       // 0x00156f90: lbu $v0, 0($t1)
    t0 = t0 | v1;                                               // 0x00156f94: or $t0, $t0, $v1
    t1 = t1 + 1;                                                // 0x00156f98: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156f9c: sll $t0, $t0, 8
    goto label_0x156fb4;                                        // 0x00156fa0: b 0x156fb4
    t0 = t0 | v0;                                               // 0x00156fa4: or $t0, $t0, $v0
label_0x156fa8:
    t2 = t2 << 0x10;                                            // 0x00156fa8: sll $t2, $t2, 0x10
    *(uint32_t*)((t3) + 0xc) = v0;                              // 0x00156fac: sw $v0, 0xc($t3)
    a1 = a1 + 0x10;                                             // 0x00156fb0: addiu $a1, $a1, 0x10
label_0x156fb4:
    goto label_0x157024;                                        // 0x00156fb4: b 0x157024
    t5 = 6;                                                     // 0x00156fb8: addiu $t5, $zero, 6
    /* nop */                                                   // 0x00156fbc: nop 
label_0x156fc0:
    if (a1 == 0) goto label_0x156fe0;                           // 0x00156fc0: beqz $a1, 0x156fe0
    v0 = -a1;                                                   // 0x00156fc4: negu $v0, $a1
    v0 = (unsigned)t0 >> v0;                                    // 0x00156fc8: srlv $v0, $t0, $v0
    v0 = t2 | v0;                                               // 0x00156fcc: or $v0, $t2, $v0
    t2 = t0 << a1;                                              // 0x00156fd0: sllv $t2, $t0, $a1
    goto label_0x156fe8;                                        // 0x00156fd4: b 0x156fe8
    *(uint32_t*)((t3) + 0xc) = v0;                              // 0x00156fd8: sw $v0, 0xc($t3)
    /* nop */                                                   // 0x00156fdc: nop 
label_0x156fe0:
    *(uint32_t*)((t3) + 0xc) = t2;                              // 0x00156fe0: sw $t2, 0xc($t3)
label_0x156fe8:
    t0 = *(int8_t*)(t1);                                        // 0x00156fe8: lb $t0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156fec: addiu $t1, $t1, 1
    v0 = *(uint8_t*)(t1);                                       // 0x00156ff0: lbu $v0, 0($t1)
    t1 = t1 + 1;                                                // 0x00156ff4: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00156ff8: sll $t0, $t0, 8
    v1 = *(uint8_t*)(t1);                                       // 0x00156ffc: lbu $v1, 0($t1)
    t0 = t0 | v0;                                               // 0x00157000: or $t0, $t0, $v0
    t1 = t1 + 1;                                                // 0x00157004: addiu $t1, $t1, 1
    t0 = t0 << 8;                                               // 0x00157008: sll $t0, $t0, 8
    v0 = *(uint8_t*)(t1);                                       // 0x0015700c: lbu $v0, 0($t1)
    t0 = t0 | v1;                                               // 0x00157010: or $t0, $t0, $v1
    t5 = 8;                                                     // 0x00157014: addiu $t5, $zero, 8
    t0 = t0 << 8;                                               // 0x00157018: sll $t0, $t0, 8
    t1 = t1 + 1;                                                // 0x0015701c: addiu $t1, $t1, 1
    t0 = t0 | v0;                                               // 0x00157020: or $t0, $t0, $v0
label_0x157024:
    v0 = a2 + -0xbe;                                            // 0x00157024: addiu $v0, $a2, -0xbe
    v0 = ((unsigned)v0 < (unsigned)2) ? 1 : 0;                  // 0x00157028: sltiu $v0, $v0, 2
    /* beqzl $v0, 0x157048 */                                   // 0x0015702c: beqzl $v0, 0x157048
    a2 = 0x38;                                                  // 0x00157030: addiu $a2, $zero, 0x38
    *(uint32_t*)(t6) = t5;                                      // 0x00157034: sw $t5, 0($t6)
    v0 = *(int32_t*)((t3) + 0xc);                               // 0x00157038: lw $v0, 0xc($t3)
    return;                                                     // 0x0015703c: jr $ra
    *(uint32_t*)((t3) + 0x1c) = v0;                             // 0x00157040: sw $v0, 0x1c($t3)
}