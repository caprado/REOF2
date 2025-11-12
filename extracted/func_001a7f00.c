void func_001a7f00() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001a7f00: addiu $sp, $sp, -0x10
    v0 = 0x7f;                                                  // 0x001a7f04: addiu $v0, $zero, 0x7f
    v1 = *(int32_t*)(a0);                                       // 0x001a7f0c: lw $v1, 0($a0)
    a1 = v1 >> 0x18;                                            // 0x001a7f10: sra $a1, $v1, 0x18
    if (a1 != v0) goto label_0x1a7f24;                          // 0x001a7f14: bne $a1, $v0, 0x1a7f24
    v0 = -1;                                                    // 0x001a7f18: addiu $v0, $zero, -1
    goto label_0x1a82a4;                                        // 0x001a7f1c: b 0x1a82a4
label_0x1a7f24:
    if (a1 != v0) goto label_0x1a7f34;                          // 0x001a7f24: bne $a1, $v0, 0x1a7f34
    a3 = a1 & 0xf0;                                             // 0x001a7f28: andi $a3, $a1, 0xf0
    goto label_0x1a82a4;                                        // 0x001a7f2c: b 0x1a82a4
label_0x1a7f34:
    a2 = 0x50;                                                  // 0x001a7f34: addiu $a2, $zero, 0x50
    if (a3 == a2) goto label_0x1a8298;                          // 0x001a7f38: beq $a3, $a2, 0x1a8298
    a2 = 0x60;                                                  // 0x001a7f3c: addiu $a2, $zero, 0x60
    if (a3 == a2) goto label_0x1a8298;                          // 0x001a7f40: beq $a3, $a2, 0x1a8298
    /* nop */                                                   // 0x001a7f44: nop 
    a2 = 0x40;                                                  // 0x001a7f48: addiu $a2, $zero, 0x40
    if (a3 == a2) goto label_0x1a817c;                          // 0x001a7f4c: beq $a3, $a2, 0x1a817c
    a2 = 0x70;                                                  // 0x001a7f50: addiu $a2, $zero, 0x70
    if (a3 == a2) goto label_0x1a8024;                          // 0x001a7f54: beq $a3, $a2, 0x1a8024
    /* nop */                                                   // 0x001a7f58: nop 
    a2 = 0x30;                                                  // 0x001a7f5c: addiu $a2, $zero, 0x30
    if (a3 == a2) goto label_0x1a8024;                          // 0x001a7f60: beq $a3, $a2, 0x1a8024
    a2 = 0x20;                                                  // 0x001a7f64: addiu $a2, $zero, 0x20
    if (a3 == a2) goto label_0x1a7fa0;                          // 0x001a7f68: beq $a3, $a2, 0x1a7fa0
    /* nop */                                                   // 0x001a7f6c: nop 
    if (a3 == 0) goto label_0x1a7f80;                           // 0x001a7f70: beqz $a3, 0x1a7f80
    /* nop */                                                   // 0x001a7f74: nop 
    goto label_0x1a82a4;                                        // 0x001a7f78: b 0x1a82a4
    /* nop */                                                   // 0x001a7f7c: nop 
label_0x1a7f80:
    a1 = *(uint8_t*)((a0) + 4);                                 // 0x001a7f80: lbu $a1, 4($a0)
    a2 = *(uint8_t*)((a0) + 5);                                 // 0x001a7f84: lbu $a2, 5($a0)
    a3 = *(uint16_t*)((a0) + 6);                                // 0x001a7f88: lhu $a3, 6($a0)
    t0 = *(uint8_t*)((a0) + 8);                                 // 0x001a7f8c: lbu $t0, 8($a0)
    func_001a7b80();  // 0x1a7aa0                                // 0x001a7f90: jal 0x1a7aa0
    goto label_0x1a82a8;                                        // 0x001a7f98: b 0x1a82a8
label_0x1a7fa0:
    v0 = a1 & 8;                                                // 0x001a7fa0: andi $v0, $a1, 8
    if (v0 == 0) goto label_0x1a7fdc;                           // 0x001a7fa4: beqz $v0, 0x1a7fdc
    v0 = 0x22;                                                  // 0x001a7fa8: addiu $v0, $zero, 0x22
    v0 = 0x29;                                                  // 0x001a7fac: addiu $v0, $zero, 0x29
    if (a1 != v0) goto label_0x1a7fcc;                          // 0x001a7fb0: bne $a1, $v0, 0x1a7fcc
    func_001a7e70();  // 0x1a7dd0                                // 0x001a7fbc: jal 0x1a7dd0
    a1 = 3;                                                     // 0x001a7fc0: addiu $a1, $zero, 3
    goto label_0x1a7fd4;                                        // 0x001a7fc4: b 0x1a7fd4
    /* nop */                                                   // 0x001a7fc8: nop 
label_0x1a7fcc:
    func_001a7e70();  // 0x1a7dd0                                // 0x001a7fcc: jal 0x1a7dd0
    a1 = 1;                                                     // 0x001a7fd0: addiu $a1, $zero, 1
label_0x1a7fd4:
    goto label_0x1a82a4;                                        // 0x001a7fd4: b 0x1a82a4
    /* nop */                                                   // 0x001a7fd8: nop 
label_0x1a7fdc:
    if (a1 == v0) goto label_0x1a8004;                          // 0x001a7fdc: beq $a1, $v0, 0x1a8004
    if (a1 == a2) goto label_0x1a8000;                          // 0x001a7fe4: beq $a1, $a2, 0x1a8000
    v0 = 0x24;                                                  // 0x001a7fe8: addiu $v0, $zero, 0x24
    if (a1 == v0) goto label_0x1a8000;                          // 0x001a7fec: beq $a1, $v0, 0x1a8000
    /* nop */                                                   // 0x001a7ff0: nop 
    v0 = 0x23;                                                  // 0x001a7ff4: addiu $v0, $zero, 0x23
    if (a1 != v0) goto label_0x1a8014;                          // 0x001a7ff8: bne $a1, $v0, 0x1a8014
label_0x1a8000:
label_0x1a8004:
    func_001a7e70();  // 0x1a7dd0                                // 0x001a8004: jal 0x1a7dd0
    a1 = 3;                                                     // 0x001a8008: addiu $a1, $zero, 3
    goto label_0x1a82a4;                                        // 0x001a800c: b 0x1a82a4
    /* nop */                                                   // 0x001a8010: nop 
label_0x1a8014:
    func_001a7e70();  // 0x1a7dd0                                // 0x001a8014: jal 0x1a7dd0
    a1 = 2;                                                     // 0x001a8018: addiu $a1, $zero, 2
    goto label_0x1a82a4;                                        // 0x001a801c: b 0x1a82a4
    /* nop */                                                   // 0x001a8020: nop 
label_0x1a8024:
    v0 = 0x38;                                                  // 0x001a8024: addiu $v0, $zero, 0x38
    if (a1 == v0) goto label_0x1a804c;                          // 0x001a8028: beq $a1, $v0, 0x1a804c
    v0 = 0x30;                                                  // 0x001a802c: addiu $v0, $zero, 0x30
    if (a1 == v0) goto label_0x1a804c;                          // 0x001a8030: beq $a1, $v0, 0x1a804c
    /* nop */                                                   // 0x001a8034: nop 
    v0 = 0x71;                                                  // 0x001a8038: addiu $v0, $zero, 0x71
    if (a1 == v0) goto label_0x1a804c;                          // 0x001a803c: beq $a1, $v0, 0x1a804c
    v0 = 0x73;                                                  // 0x001a8040: addiu $v0, $zero, 0x73
    if (a1 != v0) goto label_0x1a8060;                          // 0x001a8044: bne $a1, $v0, 0x1a8060
    /* nop */                                                   // 0x001a8048: nop 
label_0x1a804c:
    func_001a7e70();  // 0x1a7dd0                                // 0x001a8050: jal 0x1a7dd0
    a1 = 2;                                                     // 0x001a8054: addiu $a1, $zero, 2
    goto label_0x1a82a4;                                        // 0x001a8058: b 0x1a82a4
    /* nop */                                                   // 0x001a805c: nop 
label_0x1a8060:
    v0 = 0x31;                                                  // 0x001a8060: addiu $v0, $zero, 0x31
    if (a1 == v0) goto label_0x1a8098;                          // 0x001a8064: beq $a1, $v0, 0x1a8098
    v0 = 0x37;                                                  // 0x001a8068: addiu $v0, $zero, 0x37
    if (a1 == v0) goto label_0x1a8098;                          // 0x001a806c: beq $a1, $v0, 0x1a8098
    /* nop */                                                   // 0x001a8070: nop 
    v0 = a1 + -0x39;                                            // 0x001a8074: addiu $v0, $a1, -0x39
    at = ((unsigned)v0 < (unsigned)3) ? 1 : 0;                  // 0x001a8078: sltiu $at, $v0, 3
    if (at != 0) goto label_0x1a8098;                           // 0x001a807c: bnez $at, 0x1a8098
    v0 = 0x72;                                                  // 0x001a8080: addiu $v0, $zero, 0x72
    if (a1 == v0) goto label_0x1a8098;                          // 0x001a8084: beq $a1, $v0, 0x1a8098
    /* nop */                                                   // 0x001a8088: nop 
    v0 = 0x75;                                                  // 0x001a808c: addiu $v0, $zero, 0x75
    if (a1 != v0) goto label_0x1a80ac;                          // 0x001a8090: bne $a1, $v0, 0x1a80ac
    v0 = 0x3d;                                                  // 0x001a8094: addiu $v0, $zero, 0x3d
label_0x1a8098:
    func_001a7e70();  // 0x1a7dd0                                // 0x001a809c: jal 0x1a7dd0
    a1 = 3;                                                     // 0x001a80a0: addiu $a1, $zero, 3
    goto label_0x1a82a4;                                        // 0x001a80a4: b 0x1a82a4
    /* nop */                                                   // 0x001a80a8: nop 
label_0x1a80ac:
    if (a1 == v0) goto label_0x1a80c8;                          // 0x001a80ac: beq $a1, $v0, 0x1a80c8
    /* nop */                                                   // 0x001a80b0: nop 
    v0 = 0x36;                                                  // 0x001a80b4: addiu $v0, $zero, 0x36
    if (a1 == v0) goto label_0x1a80c8;                          // 0x001a80b8: beq $a1, $v0, 0x1a80c8
    v0 = 0x74;                                                  // 0x001a80bc: addiu $v0, $zero, 0x74
    if (a1 != v0) goto label_0x1a80dc;                          // 0x001a80c0: bne $a1, $v0, 0x1a80dc
    /* nop */                                                   // 0x001a80c4: nop 
label_0x1a80c8:
    func_001a7e70();  // 0x1a7dd0                                // 0x001a80cc: jal 0x1a7dd0
    a1 = 4;                                                     // 0x001a80d0: addiu $a1, $zero, 4
    goto label_0x1a82a4;                                        // 0x001a80d4: b 0x1a82a4
    /* nop */                                                   // 0x001a80d8: nop 
label_0x1a80dc:
    v0 = 0x77;                                                  // 0x001a80dc: addiu $v0, $zero, 0x77
    if (a1 == v0) goto label_0x1a80fc;                          // 0x001a80e0: beq $a1, $v0, 0x1a80fc
    v0 = 0x3c;                                                  // 0x001a80e4: addiu $v0, $zero, 0x3c
    if (a1 == v0) goto label_0x1a80fc;                          // 0x001a80e8: beq $a1, $v0, 0x1a80fc
    /* nop */                                                   // 0x001a80ec: nop 
    v0 = 0x3e;                                                  // 0x001a80f0: addiu $v0, $zero, 0x3e
    if (a1 != v0) goto label_0x1a8120;                          // 0x001a80f4: bne $a1, $v0, 0x1a8120
    v0 = 0x3f;                                                  // 0x001a80f8: addiu $v0, $zero, 0x3f
label_0x1a80fc:
    a2 = *(uint8_t*)((a0) + 4);                                 // 0x001a80fc: lbu $a2, 4($a0)
    a1 = 5;                                                     // 0x001a8100: addiu $a1, $zero, 5
    func_001a7dd0();  // 0x1a7c50                                // 0x001a8110: jal 0x1a7c50
    goto label_0x1a82a4;                                        // 0x001a8118: b 0x1a82a4
    /* nop */                                                   // 0x001a811c: nop 
label_0x1a8120:
    if (a1 != v0) goto label_0x1a814c;                          // 0x001a8120: bne $a1, $v0, 0x1a814c
    /* nop */                                                   // 0x001a8124: nop 
    a2 = *(uint8_t*)((a0) + 4);                                 // 0x001a8128: lbu $a2, 4($a0)
    a1 = 7;                                                     // 0x001a812c: addiu $a1, $zero, 7
    a3 = *(uint8_t*)((a0) + 5);                                 // 0x001a8130: lbu $a3, 5($a0)
    t0 = *(uint8_t*)((a0) + 6);                                 // 0x001a8138: lbu $t0, 6($a0)
    func_001a7dd0();  // 0x1a7c50                                // 0x001a813c: jal 0x1a7c50
    goto label_0x1a82a4;                                        // 0x001a8144: b 0x1a82a4
    /* nop */                                                   // 0x001a8148: nop 
label_0x1a814c:
    v0 = 0x35;                                                  // 0x001a814c: addiu $v0, $zero, 0x35
    if (a1 != v0) goto label_0x1a8168;                          // 0x001a8150: bne $a1, $v0, 0x1a8168
    /* nop */                                                   // 0x001a8154: nop 
    func_001a7c50();  // 0x1a7b80                                // 0x001a8158: jal 0x1a7b80
    /* nop */                                                   // 0x001a815c: nop 
    goto label_0x1a8174;                                        // 0x001a8160: b 0x1a8174
    /* nop */                                                   // 0x001a8164: nop 
label_0x1a8168:
    func_001a7e70();  // 0x1a7dd0                                // 0x001a816c: jal 0x1a7dd0
    a1 = 1;                                                     // 0x001a8170: addiu $a1, $zero, 1
label_0x1a8174:
    goto label_0x1a82a4;                                        // 0x001a8174: b 0x1a82a4
    /* nop */                                                   // 0x001a8178: nop 
label_0x1a817c:
    v0 = a1 + -0x47;                                            // 0x001a817c: addiu $v0, $a1, -0x47
    at = ((unsigned)v0 < (unsigned)4) ? 1 : 0;                  // 0x001a8180: sltiu $at, $v0, 4
    if (at != 0) goto label_0x1a81a0;                           // 0x001a8184: bnez $at, 0x1a81a0
    v0 = 0x41;                                                  // 0x001a8188: addiu $v0, $zero, 0x41
    if (a1 == v0) goto label_0x1a81a0;                          // 0x001a818c: beq $a1, $v0, 0x1a81a0
    /* nop */                                                   // 0x001a8190: nop 
    v0 = 0x42;                                                  // 0x001a8194: addiu $v0, $zero, 0x42
    if (a1 != v0) goto label_0x1a81b4;                          // 0x001a8198: bne $a1, $v0, 0x1a81b4
    v0 = 0x4b;                                                  // 0x001a819c: addiu $v0, $zero, 0x4b
label_0x1a81a0:
    func_001a7e70();  // 0x1a7dd0                                // 0x001a81a4: jal 0x1a7dd0
    a1 = 2;                                                     // 0x001a81a8: addiu $a1, $zero, 2
    goto label_0x1a82a4;                                        // 0x001a81ac: b 0x1a82a4
    /* nop */                                                   // 0x001a81b0: nop 
label_0x1a81b4:
    if (a1 != v0) goto label_0x1a81d0;                          // 0x001a81b4: bne $a1, $v0, 0x1a81d0
    /* nop */                                                   // 0x001a81b8: nop 
    func_001a7e70();  // 0x1a7dd0                                // 0x001a81c0: jal 0x1a7dd0
    a1 = 3;                                                     // 0x001a81c4: addiu $a1, $zero, 3
    goto label_0x1a82a4;                                        // 0x001a81c8: b 0x1a82a4
    /* nop */                                                   // 0x001a81cc: nop 
label_0x1a81d0:
    v0 = 0x45;                                                  // 0x001a81d0: addiu $v0, $zero, 0x45
    if (a1 == v0) goto label_0x1a81e4;                          // 0x001a81d4: beq $a1, $v0, 0x1a81e4
    v0 = 0x4c;                                                  // 0x001a81d8: addiu $v0, $zero, 0x4c
    if (a1 != v0) goto label_0x1a81f8;                          // 0x001a81dc: bne $a1, $v0, 0x1a81f8
    /* nop */                                                   // 0x001a81e0: nop 
label_0x1a81e4:
    func_001a7e70();  // 0x1a7dd0                                // 0x001a81e8: jal 0x1a7dd0
    a1 = 4;                                                     // 0x001a81ec: addiu $a1, $zero, 4
    goto label_0x1a82a4;                                        // 0x001a81f0: b 0x1a82a4
    /* nop */                                                   // 0x001a81f4: nop 
label_0x1a81f8:
    v0 = 0x44;                                                  // 0x001a81f8: addiu $v0, $zero, 0x44
    if (a1 != v0) goto label_0x1a8228;                          // 0x001a81fc: bne $a1, $v0, 0x1a8228
    v0 = 0x4d;                                                  // 0x001a8200: addiu $v0, $zero, 0x4d
    a2 = *(uint8_t*)((a0) + 4);                                 // 0x001a8204: lbu $a2, 4($a0)
    a1 = 6;                                                     // 0x001a8208: addiu $a1, $zero, 6
    a3 = *(uint8_t*)((a0) + 5);                                 // 0x001a820c: lbu $a3, 5($a0)
    func_001a7dd0();  // 0x1a7c50                                // 0x001a8218: jal 0x1a7c50
    goto label_0x1a82a4;                                        // 0x001a8220: b 0x1a82a4
    /* nop */                                                   // 0x001a8224: nop 
label_0x1a8228:
    if (a1 == v0) goto label_0x1a823c;                          // 0x001a8228: beq $a1, $v0, 0x1a823c
    /* nop */                                                   // 0x001a822c: nop 
    v0 = 0x4e;                                                  // 0x001a8230: addiu $v0, $zero, 0x4e
    if (a1 != v0) goto label_0x1a8254;                          // 0x001a8234: bne $a1, $v0, 0x1a8254
    v0 = 0x4f;                                                  // 0x001a8238: addiu $v0, $zero, 0x4f
label_0x1a823c:
    a1 = 3;                                                     // 0x001a8240: addiu $a1, $zero, 3
    func_001a7f00();  // 0x1a7e70                                // 0x001a8244: jal 0x1a7e70
    a2 = 0x15;                                                  // 0x001a8248: addiu $a2, $zero, 0x15
    goto label_0x1a82a4;                                        // 0x001a824c: b 0x1a82a4
    /* nop */                                                   // 0x001a8250: nop 
label_0x1a8254:
    if (a1 != v0) goto label_0x1a8284;                          // 0x001a8254: bne $a1, $v0, 0x1a8284
    /* nop */                                                   // 0x001a8258: nop 
    a0 = *(int32_t*)((a0) + 4);                                 // 0x001a825c: lw $a0, 4($a0)
    v0 = v1 >> 8;                                               // 0x001a8260: sra $v0, $v1, 8
    a2 = v0 & 0xff;                                             // 0x001a8264: andi $a2, $v0, 0xff
    a3 = v1 & 0xff;                                             // 0x001a8268: andi $a3, $v1, 0xff
    a1 = 6;                                                     // 0x001a826c: addiu $a1, $zero, 6
    func_001a7dd0();  // 0x1a7c50                                // 0x001a8274: jal 0x1a7c50
    goto label_0x1a8290;                                        // 0x001a827c: b 0x1a8290
    /* nop */                                                   // 0x001a8280: nop 
label_0x1a8284:
    func_001a7e70();  // 0x1a7dd0                                // 0x001a8288: jal 0x1a7dd0
    a1 = 1;                                                     // 0x001a828c: addiu $a1, $zero, 1
label_0x1a8290:
    goto label_0x1a82a4;                                        // 0x001a8290: b 0x1a82a4
    /* nop */                                                   // 0x001a8294: nop 
label_0x1a8298:
    func_001a7e70();  // 0x1a7dd0                                // 0x001a829c: jal 0x1a7dd0
    a1 = 2;                                                     // 0x001a82a0: addiu $a1, $zero, 2
label_0x1a82a4:
label_0x1a82a8:
    return;                                                     // 0x001a82a8: jr $ra
    sp = sp + 0x10;                                             // 0x001a82ac: addiu $sp, $sp, 0x10
}