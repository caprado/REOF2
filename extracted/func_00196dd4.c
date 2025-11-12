void func_00196dd4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00196dd4: addiu $sp, $sp, -0x10
    a0 = 0x6d;                                                  // 0x00196dd8: addiu $a0, $zero, 0x6d
    if (v1 == a0) goto label_0x197230;                          // 0x00196de0: beq $v1, $a0, 0x197230
    a0 = 0x6c;                                                  // 0x00196de8: addiu $a0, $zero, 0x6c
    if (v1 == a0) goto label_0x197214;                          // 0x00196dec: beq $v1, $a0, 0x197214
    /* nop */                                                   // 0x00196df0: nop 
    a0 = 0x6b;                                                  // 0x00196df4: addiu $a0, $zero, 0x6b
    if (v1 == a0) goto label_0x197204;                          // 0x00196df8: beq $v1, $a0, 0x197204
    /* nop */                                                   // 0x00196dfc: nop 
    a0 = 0x6a;                                                  // 0x00196e00: addiu $a0, $zero, 0x6a
    if (v1 == a0) goto label_0x1971fc;                          // 0x00196e04: beq $v1, $a0, 0x1971fc
    /* nop */                                                   // 0x00196e08: nop 
    a0 = 0x69;                                                  // 0x00196e0c: addiu $a0, $zero, 0x69
    if (v1 == a0) goto label_0x1971f4;                          // 0x00196e10: beq $v1, $a0, 0x1971f4
    /* nop */                                                   // 0x00196e14: nop 
    a0 = 0x68;                                                  // 0x00196e18: addiu $a0, $zero, 0x68
    if (v1 == a0) goto label_0x1972d0;                          // 0x00196e1c: beq $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x00196e20: nop 
    a0 = 0x66;                                                  // 0x00196e24: addiu $a0, $zero, 0x66
    if (v1 == a0) goto label_0x1971d8;                          // 0x00196e28: beq $v1, $a0, 0x1971d8
    /* nop */                                                   // 0x00196e2c: nop 
    a0 = 0x65;                                                  // 0x00196e30: addiu $a0, $zero, 0x65
    if (v1 == a0) goto label_0x1972d0;                          // 0x00196e34: beq $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x00196e38: nop 
    a0 = 0x64;                                                  // 0x00196e3c: addiu $a0, $zero, 0x64
    if (v1 == a0) goto label_0x1971c8;                          // 0x00196e40: beq $v1, $a0, 0x1971c8
    /* nop */                                                   // 0x00196e44: nop 
    a0 = 0x63;                                                  // 0x00196e48: addiu $a0, $zero, 0x63
    if (v1 == a0) goto label_0x1971b8;                          // 0x00196e4c: beq $v1, $a0, 0x1971b8
    /* nop */                                                   // 0x00196e50: nop 
    a0 = 0x62;                                                  // 0x00196e54: addiu $a0, $zero, 0x62
    if (v1 == a0) goto label_0x19719c;                          // 0x00196e58: beq $v1, $a0, 0x19719c
    /* nop */                                                   // 0x00196e5c: nop 
    a0 = 0x61;                                                  // 0x00196e60: addiu $a0, $zero, 0x61
    if (v1 == a0) goto label_0x197180;                          // 0x00196e64: beq $v1, $a0, 0x197180
    /* nop */                                                   // 0x00196e68: nop 
    a0 = 0x60;                                                  // 0x00196e6c: addiu $a0, $zero, 0x60
    if (v1 == a0) goto label_0x197178;                          // 0x00196e70: beq $v1, $a0, 0x197178
    /* nop */                                                   // 0x00196e74: nop 
    a0 = 0x5f;                                                  // 0x00196e78: addiu $a0, $zero, 0x5f
    if (v1 == a0) goto label_0x1970d4;                          // 0x00196e7c: beq $v1, $a0, 0x1970d4
    /* nop */                                                   // 0x00196e80: nop 
    a0 = 0x5e;                                                  // 0x00196e84: addiu $a0, $zero, 0x5e
    if (v1 == a0) goto label_0x1970cc;                          // 0x00196e88: beq $v1, $a0, 0x1970cc
    /* nop */                                                   // 0x00196e8c: nop 
    a0 = 0x5d;                                                  // 0x00196e90: addiu $a0, $zero, 0x5d
    if (v1 == a0) goto label_0x1970bc;                          // 0x00196e94: beq $v1, $a0, 0x1970bc
    /* nop */                                                   // 0x00196e98: nop 
    a0 = 0x5c;                                                  // 0x00196e9c: addiu $a0, $zero, 0x5c
    if (v1 == a0) goto label_0x197098;                          // 0x00196ea0: beq $v1, $a0, 0x197098
    a0 = v1 + -0x5a;                                            // 0x00196ea4: addiu $a0, $v1, -0x5a
    a0 = 0x5b;                                                  // 0x00196ea8: addiu $a0, $zero, 0x5b
    if (v1 == a0) goto label_0x197094;                          // 0x00196eac: beq $v1, $a0, 0x197094
    /* nop */                                                   // 0x00196eb0: nop 
    a0 = 0x5a;                                                  // 0x00196eb4: addiu $a0, $zero, 0x5a
    if (v1 == a0) goto label_0x197094;                          // 0x00196eb8: beq $v1, $a0, 0x197094
    /* nop */                                                   // 0x00196ebc: nop 
    a0 = 0x15;                                                  // 0x00196ec0: addiu $a0, $zero, 0x15
    if (v1 == a0) goto label_0x197068;                          // 0x00196ec4: beq $v1, $a0, 0x197068
    /* nop */                                                   // 0x00196ec8: nop 
    a0 = 0x14;                                                  // 0x00196ecc: addiu $a0, $zero, 0x14
    if (v1 == a0) goto label_0x197058;                          // 0x00196ed0: beq $v1, $a0, 0x197058
    /* nop */                                                   // 0x00196ed4: nop 
    a0 = 0x13;                                                  // 0x00196ed8: addiu $a0, $zero, 0x13
    if (v1 == a0) goto label_0x1972d0;                          // 0x00196edc: beq $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x00196ee0: nop 
    a0 = 0x12;                                                  // 0x00196ee4: addiu $a0, $zero, 0x12
    if (v1 == a0) goto label_0x197034;                          // 0x00196ee8: beq $v1, $a0, 0x197034
    /* nop */                                                   // 0x00196eec: nop 
    a0 = 0x11;                                                  // 0x00196ef0: addiu $a0, $zero, 0x11
    if (v1 == a0) goto label_0x1972d0;                          // 0x00196ef4: beq $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x00196ef8: nop 
    a0 = 0x10;                                                  // 0x00196efc: addiu $a0, $zero, 0x10
    if (v1 == a0) goto label_0x1972d0;                          // 0x00196f00: beq $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x00196f04: nop 
    a0 = 0xf;                                                   // 0x00196f08: addiu $a0, $zero, 0xf
    if (v1 == a0) goto label_0x19702c;                          // 0x00196f0c: beq $v1, $a0, 0x19702c
    /* nop */                                                   // 0x00196f10: nop 
    a0 = 0xe;                                                   // 0x00196f14: addiu $a0, $zero, 0xe
    if (v1 == a0) goto label_0x197024;                          // 0x00196f18: beq $v1, $a0, 0x197024
    /* nop */                                                   // 0x00196f1c: nop 
    a0 = 0xd;                                                   // 0x00196f20: addiu $a0, $zero, 0xd
    if (v1 == a0) goto label_0x197018;                          // 0x00196f24: beq $v1, $a0, 0x197018
    /* nop */                                                   // 0x00196f28: nop 
    a0 = 0xc;                                                   // 0x00196f2c: addiu $a0, $zero, 0xc
    if (v1 == a0) goto label_0x196ffc;                          // 0x00196f30: beq $v1, $a0, 0x196ffc
    /* nop */                                                   // 0x00196f34: nop 
    a0 = 0xb;                                                   // 0x00196f38: addiu $a0, $zero, 0xb
    if (v1 == a0) goto label_0x1972d0;                          // 0x00196f3c: beq $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x00196f40: nop 
    a0 = 0xa;                                                   // 0x00196f44: addiu $a0, $zero, 0xa
    if (v1 == a0) goto label_0x1972d0;                          // 0x00196f48: beq $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x00196f4c: nop 
    a0 = 9;                                                     // 0x00196f50: addiu $a0, $zero, 9
    if (v1 == a0) goto label_0x1972d0;                          // 0x00196f54: beq $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x00196f58: nop 
    a0 = 8;                                                     // 0x00196f5c: addiu $a0, $zero, 8
    if (v1 == a0) goto label_0x1972d0;                          // 0x00196f60: beq $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x00196f64: nop 
    a0 = 7;                                                     // 0x00196f68: addiu $a0, $zero, 7
    if (v1 == a0) goto label_0x196fe4;                          // 0x00196f6c: beq $v1, $a0, 0x196fe4
    /* nop */                                                   // 0x00196f70: nop 
    a0 = 6;                                                     // 0x00196f74: addiu $a0, $zero, 6
    if (v1 == a0) goto label_0x196fe4;                          // 0x00196f78: beq $v1, $a0, 0x196fe4
    /* nop */                                                   // 0x00196f7c: nop 
    a0 = 5;                                                     // 0x00196f80: addiu $a0, $zero, 5
    if (v1 == a0) goto label_0x196fe4;                          // 0x00196f84: beq $v1, $a0, 0x196fe4
    /* nop */                                                   // 0x00196f88: nop 
    a0 = 4;                                                     // 0x00196f8c: addiu $a0, $zero, 4
    if (v1 == a0) goto label_0x196fe4;                          // 0x00196f90: beq $v1, $a0, 0x196fe4
    /* nop */                                                   // 0x00196f94: nop 
    a0 = 2;                                                     // 0x00196f98: addiu $a0, $zero, 2
    if (v1 == a0) goto label_0x196fd8;                          // 0x00196f9c: beq $v1, $a0, 0x196fd8
    /* nop */                                                   // 0x00196fa0: nop 
    a0 = 1;                                                     // 0x00196fa4: addiu $a0, $zero, 1
    if (v1 == a0) goto label_0x196fcc;                          // 0x00196fa8: beq $v1, $a0, 0x196fcc
    /* nop */                                                   // 0x00196fac: nop 
    a0 = 3;                                                     // 0x00196fb0: addiu $a0, $zero, 3
    if (v1 == a0) goto label_0x1972d0;                          // 0x00196fb4: beq $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x00196fb8: nop 
    if (v1 == 0) goto label_0x1972d0;                           // 0x00196fbc: beqz $v1, 0x1972d0
    /* nop */                                                   // 0x00196fc0: nop 
    goto label_0x1972d4;                                        // 0x00196fc4: b 0x1972d4
label_0x196fcc:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196fcc: lw $v0, -0x6458($gp)
    goto label_0x1972d0;                                        // 0x00196fd0: b 0x1972d0
    v0 = v0 & 0xf00;                                            // 0x00196fd4: andi $v0, $v0, 0xf00
label_0x196fd8:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196fd8: lw $v0, -0x6458($gp)
    goto label_0x1972d0;                                        // 0x00196fdc: b 0x1972d0
    v0 = v0 & 0x1c;                                             // 0x00196fe0: andi $v0, $v0, 0x1c
label_0x196fe4:
    v1 = v1 + -4;                                               // 0x00196fe4: addiu $v1, $v1, -4
    v0 = gp + -0x6498;                                          // 0x00196fe8: addiu $v0, $gp, -0x6498
    v1 = v1 << 2;                                               // 0x00196fec: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x00196ff0: addu $v0, $v0, $v1
    goto label_0x1972d0;                                        // 0x00196ff4: b 0x1972d0
    v0 = g_00c00000;  // Global at 0x00c00000                   // 0x00196ff8: lw $v0, 0($v0)
label_0x196ffc:
    a0 = *(int32_t*)((gp) + -0x6458);                           // 0x00196ffc: lw $a0, -0x6458($gp)
    v1 = 0x80;                                                  // 0x00197000: addiu $v1, $zero, 0x80
    a0 = a0 & 0x80;                                             // 0x00197004: andi $a0, $a0, 0x80
    if (a0 != v1) goto label_0x1972d0;                          // 0x00197008: bne $a0, $v1, 0x1972d0
    /* nop */                                                   // 0x0019700c: nop 
    goto label_0x1972d0;                                        // 0x00197010: b 0x1972d0
    v0 = 1;                                                     // 0x00197014: addiu $v0, $zero, 1
label_0x197018:
    v0 = *(int32_t*)((gp) + -0x645c);                           // 0x00197018: lw $v0, -0x645c($gp)
    goto label_0x1972d0;                                        // 0x0019701c: b 0x1972d0
    v0 = v0 & 0xc00;                                            // 0x00197020: andi $v0, $v0, 0xc00
label_0x197024:
    goto label_0x1972d0;                                        // 0x00197024: b 0x1972d0
    v0 = *(int32_t*)((gp) + -0x646c);                           // 0x00197028: lw $v0, -0x646c($gp)
label_0x19702c:
    goto label_0x1972d0;                                        // 0x0019702c: b 0x1972d0
    v0 = *(int32_t*)((gp) + -0x6468);                           // 0x00197030: lw $v0, -0x6468($gp)
label_0x197034:
    a1 = *(int32_t*)((gp) + -0x6458);                           // 0x00197034: lw $a1, -0x6458($gp)
    v1 = 1 << 16;                                               // 0x00197038: lui $v1, 1
    a0 = v1 | 0x8000;                                           // 0x0019703c: ori $a0, $v1, 0x8000
    v1 = 0 | 0x8000;                                            // 0x00197040: ori $v1, $zero, 0x8000
    a0 = a1 & a0;                                               // 0x00197044: and $a0, $a1, $a0
    if (a0 != v1) goto label_0x1972d0;                          // 0x00197048: bne $a0, $v1, 0x1972d0
    /* nop */                                                   // 0x0019704c: nop 
    goto label_0x1972d0;                                        // 0x00197050: b 0x1972d0
    v0 = 1;                                                     // 0x00197054: addiu $v0, $zero, 1
label_0x197058:
    func_001972f0();  // 0x1972f0                               // 0x00197058: jal 0x1972f0
    /* nop */                                                   // 0x0019705c: nop 
    goto label_0x1972d0;                                        // 0x00197060: b 0x1972d0
    /* nop */                                                   // 0x00197064: nop 
label_0x197068:
    v0 = *(int32_t*)((gp) + -0x6458);                           // 0x00197068: lw $v0, -0x6458($gp)
    v0 = v0 & 3;                                                // 0x0019706c: andi $v0, $v0, 3
    if (v0 != 0) goto label_0x197084;                           // 0x00197070: bnez $v0, 0x197084
    v1 = 2;                                                     // 0x00197074: addiu $v1, $zero, 2
    goto label_0x1972d0;                                        // 0x00197078: b 0x1972d0
    v1 = 2;                                                     // 0x00197080: addiu $v1, $zero, 2
label_0x197084:
    if (v0 != v1) goto label_0x1972d0;                          // 0x00197084: bne $v0, $v1, 0x1972d0
    /* nop */                                                   // 0x00197088: nop 
    goto label_0x1972d0;                                        // 0x0019708c: b 0x1972d0
label_0x197094:
    a0 = v1 + -0x5a;                                            // 0x00197094: addiu $a0, $v1, -0x5a
label_0x197098:
    v0 = 0x28 << 16;                                            // 0x00197098: lui $v0, 0x28
    v1 = a0 << 1;                                               // 0x0019709c: sll $v1, $a0, 1
    v0 = v0 + 0x4820;                                           // 0x001970a0: addiu $v0, $v0, 0x4820
    v1 = v1 + a0;                                               // 0x001970a4: addu $v1, $v1, $a0
    v1 = v1 << 2;                                               // 0x001970a8: sll $v1, $v1, 2
    v1 = v1 + a0;                                               // 0x001970ac: addu $v1, $v1, $a0
    v1 = v1 << 3;                                               // 0x001970b0: sll $v1, $v1, 3
    goto label_0x1972d0;                                        // 0x001970b4: b 0x1972d0
    v0 = v0 + v1;                                               // 0x001970b8: addu $v0, $v0, $v1
label_0x1970bc:
    v1 = *(int32_t*)((gp) + -0x6458);                           // 0x001970bc: lw $v1, -0x6458($gp)
    v0 = 0xff00 << 16;                                          // 0x001970c0: lui $v0, 0xff00
    goto label_0x1972d0;                                        // 0x001970c4: b 0x1972d0
    v0 = v1 & v0;                                               // 0x001970c8: and $v0, $v1, $v0
label_0x1970cc:
    goto label_0x1972d0;                                        // 0x001970cc: b 0x1972d0
    v0 = *(uint8_t*)((gp) + -0x645c);                           // 0x001970d0: lbu $v0, -0x645c($gp)
label_0x1970d4:
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x001970d4: lw $a0, -0x645c($gp)
    v1 = 0x38 << 16;                                            // 0x001970d8: lui $v1, 0x38
    a0 = a0 & v1;                                               // 0x001970dc: and $a0, $a0, $v1
    if (a0 == v1) goto label_0x197170;                          // 0x001970e0: beq $a0, $v1, 0x197170
    /* nop */                                                   // 0x001970e4: nop 
    v1 = 0x30 << 16;                                            // 0x001970e8: lui $v1, 0x30
    if (a0 == v1) goto label_0x197168;                          // 0x001970ec: beq $a0, $v1, 0x197168
    /* nop */                                                   // 0x001970f0: nop 
    v1 = 0x28 << 16;                                            // 0x001970f4: lui $v1, 0x28
    if (a0 == v1) goto label_0x197160;                          // 0x001970f8: beq $a0, $v1, 0x197160
    /* nop */                                                   // 0x001970fc: nop 
    v1 = 0x20 << 16;                                            // 0x00197100: lui $v1, 0x20
    if (a0 == v1) goto label_0x197158;                          // 0x00197104: beq $a0, $v1, 0x197158
    /* nop */                                                   // 0x00197108: nop 
    v1 = 0x18 << 16;                                            // 0x0019710c: lui $v1, 0x18
    if (a0 == v1) goto label_0x197150;                          // 0x00197110: beq $a0, $v1, 0x197150
    /* nop */                                                   // 0x00197114: nop 
    v1 = 0x10 << 16;                                            // 0x00197118: lui $v1, 0x10
    if (a0 == v1) goto label_0x197148;                          // 0x0019711c: beq $a0, $v1, 0x197148
    /* nop */                                                   // 0x00197120: nop 
    v1 = 8 << 16;                                               // 0x00197124: lui $v1, 8
    if (a0 == v1) goto label_0x197140;                          // 0x00197128: beq $a0, $v1, 0x197140
    /* nop */                                                   // 0x0019712c: nop 
    if (a0 == 0) goto label_0x1972d0;                           // 0x00197130: beqz $a0, 0x1972d0
    /* nop */                                                   // 0x00197134: nop 
    goto label_0x1972d0;                                        // 0x00197138: b 0x1972d0
    /* nop */                                                   // 0x0019713c: nop 
label_0x197140:
    goto label_0x1972d0;                                        // 0x00197140: b 0x1972d0
    v0 = 1;                                                     // 0x00197144: addiu $v0, $zero, 1
label_0x197148:
    goto label_0x1972d0;                                        // 0x00197148: b 0x1972d0
    v0 = 2;                                                     // 0x0019714c: addiu $v0, $zero, 2
label_0x197150:
    goto label_0x1972d0;                                        // 0x00197150: b 0x1972d0
    v0 = 3;                                                     // 0x00197154: addiu $v0, $zero, 3
label_0x197158:
    goto label_0x1972d0;                                        // 0x00197158: b 0x1972d0
    v0 = 4;                                                     // 0x0019715c: addiu $v0, $zero, 4
label_0x197160:
    goto label_0x1972d0;                                        // 0x00197160: b 0x1972d0
    v0 = 5;                                                     // 0x00197164: addiu $v0, $zero, 5
label_0x197168:
    goto label_0x1972d0;                                        // 0x00197168: b 0x1972d0
    v0 = 6;                                                     // 0x0019716c: addiu $v0, $zero, 6
label_0x197170:
    goto label_0x1972d0;                                        // 0x00197170: b 0x1972d0
    v0 = 7;                                                     // 0x00197174: addiu $v0, $zero, 7
label_0x197178:
    goto label_0x1972d0;                                        // 0x00197178: b 0x1972d0
    v0 = *(int32_t*)((gp) + -0x6474);                           // 0x0019717c: lw $v0, -0x6474($gp)
label_0x197180:
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x00197180: lw $v1, -0x645c($gp)
    a0 = 0x100 << 16;                                           // 0x00197184: lui $a0, 0x100
    v1 = v1 & a0;                                               // 0x00197188: and $v1, $v1, $a0
    if (v1 != a0) goto label_0x1972d0;                          // 0x0019718c: bne $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x00197190: nop 
    goto label_0x1972d0;                                        // 0x00197194: b 0x1972d0
    v0 = 1;                                                     // 0x00197198: addiu $v0, $zero, 1
label_0x19719c:
    a0 = *(int32_t*)((gp) + -0x6458);                           // 0x0019719c: lw $a0, -0x6458($gp)
    v1 = 0x4000;                                                // 0x001971a0: addiu $v1, $zero, 0x4000
    a0 = a0 & 0x4000;                                           // 0x001971a4: andi $a0, $a0, 0x4000
    if (a0 != v1) goto label_0x1972d0;                          // 0x001971a8: bne $a0, $v1, 0x1972d0
    /* nop */                                                   // 0x001971ac: nop 
    goto label_0x1972d0;                                        // 0x001971b0: b 0x1972d0
    v0 = 1;                                                     // 0x001971b4: addiu $v0, $zero, 1
label_0x1971b8:
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x001971b8: lw $v1, -0x645c($gp)
    v0 = 1 << 16;                                               // 0x001971bc: lui $v0, 1
    goto label_0x1972d0;                                        // 0x001971c0: b 0x1972d0
    v0 = v1 & v0;                                               // 0x001971c4: and $v0, $v1, $v0
label_0x1971c8:
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x001971c8: lw $v1, -0x645c($gp)
    v0 = 6 << 16;                                               // 0x001971cc: lui $v0, 6
    goto label_0x1972d0;                                        // 0x001971d0: b 0x1972d0
    v0 = v1 & v0;                                               // 0x001971d4: and $v0, $v1, $v0
label_0x1971d8:
    v1 = *(int32_t*)((gp) + -0x6458);                           // 0x001971d8: lw $v1, -0x6458($gp)
    a0 = 2 << 16;                                               // 0x001971dc: lui $a0, 2
    v1 = v1 & a0;                                               // 0x001971e0: and $v1, $v1, $a0
    if (v1 != a0) goto label_0x1972d0;                          // 0x001971e4: bne $v1, $a0, 0x1972d0
    /* nop */                                                   // 0x001971e8: nop 
    goto label_0x1972d0;                                        // 0x001971ec: b 0x1972d0
    v0 = 1;                                                     // 0x001971f0: addiu $v0, $zero, 1
label_0x1971f4:
    goto label_0x1972d0;                                        // 0x001971f4: b 0x1972d0
    v0 = *(int32_t*)((gp) + -0x648c);                           // 0x001971f8: lw $v0, -0x648c($gp)
label_0x1971fc:
    goto label_0x1972d0;                                        // 0x001971fc: b 0x1972d0
    v0 = *(int32_t*)((gp) + -0x6490);                           // 0x00197200: lw $v0, -0x6490($gp)
label_0x197204:
    v1 = *(int32_t*)((gp) + -0x645c);                           // 0x00197204: lw $v1, -0x645c($gp)
    v0 = 0xc0 << 16;                                            // 0x00197208: lui $v0, 0xc0
    goto label_0x1972d0;                                        // 0x0019720c: b 0x1972d0
    v0 = v1 & v0;                                               // 0x00197210: and $v0, $v1, $v0
label_0x197214:
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x00197214: lw $a0, -0x645c($gp)
    v1 = 0 | 0x8000;                                            // 0x00197218: ori $v1, $zero, 0x8000
    a0 = a0 & 0x8000;                                           // 0x0019721c: andi $a0, $a0, 0x8000
    if (a0 != v1) goto label_0x1972d0;                          // 0x00197220: bne $a0, $v1, 0x1972d0
    /* nop */                                                   // 0x00197224: nop 
    goto label_0x1972d0;                                        // 0x00197228: b 0x1972d0
    v0 = 1;                                                     // 0x0019722c: addiu $v0, $zero, 1
label_0x197230:
    a0 = *(int32_t*)((gp) + -0x645c);                           // 0x00197230: lw $a0, -0x645c($gp)
    v1 = 0x7000;                                                // 0x00197234: addiu $v1, $zero, 0x7000
    a0 = a0 & 0x7000;                                           // 0x00197238: andi $a0, $a0, 0x7000
    if (a0 == v1) goto label_0x1972cc;                          // 0x0019723c: beq $a0, $v1, 0x1972cc
    /* nop */                                                   // 0x00197240: nop 
    v1 = 0x6000;                                                // 0x00197244: addiu $v1, $zero, 0x6000
    if (a0 == v1) goto label_0x1972c4;                          // 0x00197248: beq $a0, $v1, 0x1972c4
    /* nop */                                                   // 0x0019724c: nop 
    v1 = 0x5000;                                                // 0x00197250: addiu $v1, $zero, 0x5000
    if (a0 == v1) goto label_0x1972bc;                          // 0x00197254: beq $a0, $v1, 0x1972bc
    /* nop */                                                   // 0x00197258: nop 
    v1 = 0x4000;                                                // 0x0019725c: addiu $v1, $zero, 0x4000
    if (a0 == v1) goto label_0x1972b4;                          // 0x00197260: beq $a0, $v1, 0x1972b4
    /* nop */                                                   // 0x00197264: nop 
    v1 = 0x3000;                                                // 0x00197268: addiu $v1, $zero, 0x3000
    if (a0 == v1) goto label_0x1972ac;                          // 0x0019726c: beq $a0, $v1, 0x1972ac
    /* nop */                                                   // 0x00197270: nop 
    v1 = 0x2000;                                                // 0x00197274: addiu $v1, $zero, 0x2000
    if (a0 == v1) goto label_0x1972a4;                          // 0x00197278: beq $a0, $v1, 0x1972a4
    /* nop */                                                   // 0x0019727c: nop 
    v1 = 0x1000;                                                // 0x00197280: addiu $v1, $zero, 0x1000
    if (a0 == v1) goto label_0x19729c;                          // 0x00197284: beq $a0, $v1, 0x19729c
    /* nop */                                                   // 0x00197288: nop 
    if (a0 == 0) goto label_0x1972d0;                           // 0x0019728c: beqz $a0, 0x1972d0
    /* nop */                                                   // 0x00197290: nop 
    goto label_0x1972d0;                                        // 0x00197294: b 0x1972d0
    /* nop */                                                   // 0x00197298: nop 
label_0x19729c:
    goto label_0x1972d0;                                        // 0x0019729c: b 0x1972d0
    v0 = 1;                                                     // 0x001972a0: addiu $v0, $zero, 1
label_0x1972a4:
    goto label_0x1972d0;                                        // 0x001972a4: b 0x1972d0
    v0 = 2;                                                     // 0x001972a8: addiu $v0, $zero, 2
label_0x1972ac:
    goto label_0x1972d0;                                        // 0x001972ac: b 0x1972d0
    v0 = 3;                                                     // 0x001972b0: addiu $v0, $zero, 3
label_0x1972b4:
    goto label_0x1972d0;                                        // 0x001972b4: b 0x1972d0
    v0 = 4;                                                     // 0x001972b8: addiu $v0, $zero, 4
label_0x1972bc:
    goto label_0x1972d0;                                        // 0x001972bc: b 0x1972d0
    v0 = 5;                                                     // 0x001972c0: addiu $v0, $zero, 5
label_0x1972c4:
    goto label_0x1972d0;                                        // 0x001972c4: b 0x1972d0
    v0 = 6;                                                     // 0x001972c8: addiu $v0, $zero, 6
label_0x1972cc:
    v0 = 7;                                                     // 0x001972cc: addiu $v0, $zero, 7
label_0x1972d0:
label_0x1972d4:
    return;                                                     // 0x001972d4: jr $ra
    sp = sp + 0x10;                                             // 0x001972d8: addiu $sp, $sp, 0x10
}