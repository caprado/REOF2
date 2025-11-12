void func_001d6860() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0xb0;                                            // 0x001d6860: addiu $sp, $sp, -0xb0
    a1 = 0xff;                                                  // 0x001d6864: addiu $a1, $zero, 0xff
    a0 = sp + 0x90;                                             // 0x001d686c: addiu $a0, $sp, 0x90
    a2 = 0x20;                                                  // 0x001d6874: addiu $a2, $zero, 0x20
    /* FPU: dpa.w.ph $ac0, $sp, $s3 */                          // 0x001d6878: dpa.w.ph $ac0, $sp, $s3
    /* FPU: addu.qb $zero, $sp, $s1 */                          // 0x001d6880: addu.qb $zero, $sp, $s1
    func_00107d30();  // 0x107c70                                // 0x001d6884: jal 0x107c70
    a0 = sp + 0x70;                                             // 0x001d688c: addiu $a0, $sp, 0x70
    a1 = 0xff;                                                  // 0x001d6890: addiu $a1, $zero, 0xff
    func_00107d30();  // 0x107c70                                // 0x001d6894: jal 0x107c70
    a2 = 0x20;                                                  // 0x001d6898: addiu $a2, $zero, 0x20
    a0 = sp + 0x60;                                             // 0x001d689c: addiu $a0, $sp, 0x60
    a1 = 0xff;                                                  // 0x001d68a0: addiu $a1, $zero, 0xff
    func_00107d30();  // 0x107c70                                // 0x001d68a4: jal 0x107c70
    a2 = 0x10;                                                  // 0x001d68a8: addiu $a2, $zero, 0x10
    a0 = sp + 0x90;                                             // 0x001d68ac: addiu $a0, $sp, 0x90
    a1 = sp + 0x70;                                             // 0x001d68b0: addiu $a1, $sp, 0x70
    func_001d6860();  // 0x1d6780                                // 0x001d68b4: jal 0x1d6780
    a2 = sp + 0x60;                                             // 0x001d68b8: addiu $a2, $sp, 0x60
    at = 0x49 << 16;                                            // 0x001d68bc: lui $at, 0x49
    v0 = 1;                                                     // 0x001d68c0: addiu $v0, $zero, 1
    v1 = g_004912c8;  // Global at 0x004912c8                   // 0x001d68c4: lb $v1, 0x12c8($at)
    if (v1 == v0) goto label_0x1d6a7c;                          // 0x001d68c8: beq $v1, $v0, 0x1d6a7c
    t2 = 0x36 << 16;                                            // 0x001d68d4: lui $t2, 0x36
    t1 = 0x49 << 16;                                            // 0x001d68d8: lui $t1, 0x49
    v0 = 0x49 << 16;                                            // 0x001d68dc: lui $v0, 0x49
    t3 = 0 | 0xffff;                                            // 0x001d68e0: ori $t3, $zero, 0xffff
    t0 = -1;                                                    // 0x001d68e4: addiu $t0, $zero, -1
    t2 = t2 + -0x7930;                                          // 0x001d68e8: addiu $t2, $t2, -0x7930
    t1 = t1 + -0x790;                                           // 0x001d68ec: addiu $t1, $t1, -0x790
    v0 = v0 + -0x190;                                           // 0x001d68f0: addiu $v0, $v0, -0x190
    v1 = a0 << 1;                                               // 0x001d68f4: sll $v1, $a0, 1
label_0x1d68f8:
    v1 = v0 + v1;                                               // 0x001d68f8: addu $v1, $v0, $v1
    v1 = *(uint16_t*)((v1) + 0xda0);                            // 0x001d68fc: lhu $v1, 0xda0($v1)
    if (v1 == t3) goto label_0x1d69b4;                          // 0x001d6900: beq $v1, $t3, 0x1d69b4
    a1 = v1 << 3;                                               // 0x001d6904: sll $a1, $v1, 3
    a1 = t2 + a1;                                               // 0x001d6908: addu $a1, $t2, $a1
    v1 = a0 << 7;                                               // 0x001d690c: sll $v1, $a0, 7
    a2 = *(int32_t*)(a1);                                       // 0x001d6910: lw $a2, 0($a1)
    v1 = t1 + v1;                                               // 0x001d6914: addu $v1, $t1, $v1
label_0x1d691c:
    a3 = *(int32_t*)(v1);                                       // 0x001d691c: lw $a3, 0($v1)
    if (a3 == t0) goto label_0x1d69a4;                          // 0x001d6920: beq $a3, $t0, 0x1d69a4
    v1 = v1 + 4;                                                // 0x001d6924: addiu $v1, $v1, 4
    a3 = a3 << 4;                                               // 0x001d6928: sll $a3, $a3, 4
    a3 = a2 + a3;                                               // 0x001d692c: addu $a3, $a2, $a3
    t6 = *(uint8_t*)((a3) + 1);                                 // 0x001d6930: lbu $t6, 1($a3)
    t5 = *(uint8_t*)(a3);                                       // 0x001d6934: lbu $t5, 0($a3)
    goto label_0x1d6960;                                        // 0x001d6938: b 0x1d6960
label_0x1d6940:
    a3 = a3 + sp;                                               // 0x001d6940: addu $a3, $a3, $sp
    t4 = a3 + 0x90;                                             // 0x001d6944: addiu $t4, $a3, 0x90
    a3 = g_0048fed2;  // Global at 0x0048fed2                   // 0x001d6948: lhu $a3, 0($t4)
    if (t5 != a3) goto label_0x1d695c;                          // 0x001d694c: bne $t5, $a3, 0x1d695c
    /* nop */                                                   // 0x001d6950: nop 
    goto label_0x1d696c;                                        // 0x001d6954: b 0x1d696c
    g_0048fed2 = t3;  // Global at 0x0048fed2                   // 0x001d6958: sh $t3, 0($t4)
label_0x1d695c:
    t7 = t7 + 1;                                                // 0x001d695c: addiu $t7, $t7, 1
label_0x1d6960:
    a3 = (t7 < 0x10) ? 1 : 0;                                   // 0x001d6960: slti $a3, $t7, 0x10
    if (a3 != 0) goto label_0x1d6940;                           // 0x001d6964: bnez $a3, 0x1d6940
    a3 = t7 << 1;                                               // 0x001d6968: sll $a3, $t7, 1
label_0x1d696c:
    t6 = t6 & 0xffff;                                           // 0x001d696c: andi $t6, $t6, 0xffff
    goto label_0x1d6998;                                        // 0x001d6970: b 0x1d6998
label_0x1d6978:
    a3 = a3 + sp;                                               // 0x001d6978: addu $a3, $a3, $sp
    t5 = a3 + 0x70;                                             // 0x001d697c: addiu $t5, $a3, 0x70
    a3 = *(uint16_t*)(t5);                                      // 0x001d6980: lhu $a3, 0($t5)
    if (t6 != a3) goto label_0x1d6994;                          // 0x001d6984: bne $t6, $a3, 0x1d6994
    /* nop */                                                   // 0x001d6988: nop 
    goto label_0x1d69a4;                                        // 0x001d698c: b 0x1d69a4
    *(uint16_t*)(t5) = t3;                                      // 0x001d6990: sh $t3, 0($t5)
label_0x1d6994:
    t4 = t4 + 1;                                                // 0x001d6994: addiu $t4, $t4, 1
label_0x1d6998:
    a3 = (t4 < 0x10) ? 1 : 0;                                   // 0x001d6998: slti $a3, $t4, 0x10
    if (a3 != 0) goto label_0x1d6978;                           // 0x001d699c: bnez $a3, 0x1d6978
    a3 = t4 << 1;                                               // 0x001d69a0: sll $a3, $t4, 1
label_0x1d69a4:
    a1 = a1 + 1;                                                // 0x001d69a4: addiu $a1, $a1, 1
    a3 = (a1 < 0x20) ? 1 : 0;                                   // 0x001d69a8: slti $a3, $a1, 0x20
    if (a3 != 0) goto label_0x1d691c;                           // 0x001d69ac: bnez $a3, 0x1d691c
    /* nop */                                                   // 0x001d69b0: nop 
label_0x1d69b4:
    a0 = a0 + 1;                                                // 0x001d69b4: addiu $a0, $a0, 1
    v1 = (a0 < 3) ? 1 : 0;                                      // 0x001d69b8: slti $v1, $a0, 3
    if (v1 != 0) goto label_0x1d68f8;                           // 0x001d69bc: bnez $v1, 0x1d68f8
    v1 = a0 << 1;                                               // 0x001d69c0: sll $v1, $a0, 1
    a0 = 0x49 << 16;                                            // 0x001d69c8: lui $a0, 0x49
    a2 = 0x49 << 16;                                            // 0x001d69cc: lui $a2, 0x49
    a1 = 0 | 0xffff;                                            // 0x001d69d0: ori $a1, $zero, 0xffff
    v1 = -1;                                                    // 0x001d69d4: addiu $v1, $zero, -1
    a0 = a0 + -0x790;                                           // 0x001d69d8: addiu $a0, $a0, -0x790
    a2 = a2 + -0x190;                                           // 0x001d69dc: addiu $a2, $a2, -0x190
    v0 = t2 << 1;                                               // 0x001d69e0: sll $v0, $t2, 1
label_0x1d69e4:
    v0 = a2 + v0;                                               // 0x001d69e4: addu $v0, $a2, $v0
    v0 = g_00490c10;  // Global at 0x00490c10                   // 0x001d69e8: lhu $v0, 0xda0($v0)
    if (v0 == a1) goto label_0x1d6a68;                          // 0x001d69ec: beq $v0, $a1, 0x1d6a68
    t6 = v0 & 0xffff;                                           // 0x001d69f0: andi $t6, $v0, 0xffff
    v0 = t2 << 7;                                               // 0x001d69f8: sll $v0, $t2, 7
    v0 = a0 + v0;                                               // 0x001d69fc: addu $v0, $a0, $v0
    t1 = v0 + 0x180;                                            // 0x001d6a00: addiu $t1, $v0, 0x180
label_0x1d6a04:
    v0 = g_0048fff0;  // Global at 0x0048fff0                   // 0x001d6a04: lw $v0, 0($t1)
    if (v0 == v1) goto label_0x1d6a58;                          // 0x001d6a08: beq $v0, $v1, 0x1d6a58
    t1 = t1 + 4;                                                // 0x001d6a0c: addiu $t1, $t1, 4
    t5 = v0 & 0xffff;                                           // 0x001d6a10: andi $t5, $v0, 0xffff
    goto label_0x1d6a4c;                                        // 0x001d6a14: b 0x1d6a4c
label_0x1d6a1c:
    v0 = v0 + sp;                                               // 0x001d6a1c: addu $v0, $v0, $sp
    t3 = v0 + 0x60;                                             // 0x001d6a20: addiu $t3, $v0, 0x60
    v0 = g_0048fed0;  // Global at 0x0048fed0                   // 0x001d6a24: lhu $v0, 0($t3)
    if (t6 != v0) goto label_0x1d6a48;                          // 0x001d6a28: bne $t6, $v0, 0x1d6a48
    /* nop */                                                   // 0x001d6a2c: nop 
    v0 = g_0048fed2;  // Global at 0x0048fed2                   // 0x001d6a30: lhu $v0, 2($t3)
    if (t5 != v0) goto label_0x1d6a48;                          // 0x001d6a34: bne $t5, $v0, 0x1d6a48
    t4 = t3 + 2;                                                // 0x001d6a38: addiu $t4, $t3, 2
    g_0048fed0 = a1;  // Global at 0x0048fed0                   // 0x001d6a3c: sh $a1, 0($t3)
    goto label_0x1d6a58;                                        // 0x001d6a40: b 0x1d6a58
    g_0048fed2 = a1;  // Global at 0x0048fed2                   // 0x001d6a44: sh $a1, 0($t4)
label_0x1d6a48:
    a3 = a3 + 1;                                                // 0x001d6a48: addiu $a3, $a3, 1
label_0x1d6a4c:
    v0 = (a3 < 4) ? 1 : 0;                                      // 0x001d6a4c: slti $v0, $a3, 4
    if (v0 != 0) goto label_0x1d6a1c;                           // 0x001d6a50: bnez $v0, 0x1d6a1c
    v0 = a3 << 2;                                               // 0x001d6a54: sll $v0, $a3, 2
label_0x1d6a58:
    t0 = t0 + 1;                                                // 0x001d6a58: addiu $t0, $t0, 1
    v0 = (t0 < 0x20) ? 1 : 0;                                   // 0x001d6a5c: slti $v0, $t0, 0x20
    if (v0 != 0) goto label_0x1d6a04;                           // 0x001d6a60: bnez $v0, 0x1d6a04
    /* nop */                                                   // 0x001d6a64: nop 
label_0x1d6a68:
    t2 = t2 + 1;                                                // 0x001d6a68: addiu $t2, $t2, 1
    v0 = (t2 < 3) ? 1 : 0;                                      // 0x001d6a6c: slti $v0, $t2, 3
    if (v0 != 0) goto label_0x1d69e4;                           // 0x001d6a70: bnez $v0, 0x1d69e4
    v0 = t2 << 1;                                               // 0x001d6a74: sll $v0, $t2, 1
label_0x1d6a7c:
    s1 = s0 << 1;                                               // 0x001d6a7c: sll $s1, $s0, 1
label_0x1d6a80:
    v0 = 0 | 0xffff;                                            // 0x001d6a80: ori $v0, $zero, 0xffff
    v1 = s1 + sp;                                               // 0x001d6a84: addu $v1, $s1, $sp
    a2 = *(uint16_t*)((v1) + 0x90);                             // 0x001d6a88: lhu $a2, 0x90($v1)
    if (a2 == v0) goto label_0x1d6aa4;                          // 0x001d6a8c: beq $a2, $v0, 0x1d6aa4
    v1 = s1 + sp;                                               // 0x001d6a90: addu $v1, $s1, $sp
    a0 = 4;                                                     // 0x001d6a94: addiu $a0, $zero, 4
    func_001d5a60();  // 0x1d5990                                // 0x001d6a98: jal 0x1d5990
    a1 = 1;                                                     // 0x001d6a9c: addiu $a1, $zero, 1
    v1 = s1 + sp;                                               // 0x001d6aa0: addu $v1, $s1, $sp
label_0x1d6aa4:
    v0 = 0 | 0xffff;                                            // 0x001d6aa4: ori $v0, $zero, 0xffff
    v1 = *(uint16_t*)((v1) + 0x70);                             // 0x001d6aa8: lhu $v1, 0x70($v1)
    if (v1 == v0) goto label_0x1d6ac0;                          // 0x001d6aac: beq $v1, $v0, 0x1d6ac0
    a2 = v1 & 0xffff;                                           // 0x001d6ab0: andi $a2, $v1, 0xffff
    a0 = 4;                                                     // 0x001d6ab4: addiu $a0, $zero, 4
    func_001d5600();  // 0x1d5530                                // 0x001d6ab8: jal 0x1d5530
    a1 = 1;                                                     // 0x001d6abc: addiu $a1, $zero, 1
label_0x1d6ac0:
    s0 = s0 + 1;                                                // 0x001d6ac0: addiu $s0, $s0, 1
    v0 = (s0 < 0x10) ? 1 : 0;                                   // 0x001d6ac4: slti $v0, $s0, 0x10
    if (v0 != 0) goto label_0x1d6a80;                           // 0x001d6ac8: bnez $v0, 0x1d6a80
    s1 = s0 << 1;                                               // 0x001d6acc: sll $s1, $s0, 1
    v1 = s0 << 2;                                               // 0x001d6ad4: sll $v1, $s0, 2
label_0x1d6ad8:
    v0 = 0 | 0xffff;                                            // 0x001d6ad8: ori $v0, $zero, 0xffff
    v1 = v1 + sp;                                               // 0x001d6adc: addu $v1, $v1, $sp
    s1 = v1 + 0x60;                                             // 0x001d6ae0: addiu $s1, $v1, 0x60
    a0 = *(uint16_t*)(s1);                                      // 0x001d6ae4: lhu $a0, 0($s1)
    if (a0 == v0) goto label_0x1d6b10;                          // 0x001d6ae8: beq $a0, $v0, 0x1d6b10
    /* nop */                                                   // 0x001d6aec: nop 
    func_001d6440();  // 0x1d63a0                                // 0x001d6af0: jal 0x1d63a0
    a1 = *(uint16_t*)((s1) + 2);                                // 0x001d6af4: lhu $a1, 2($s1)
    v1 = *(uint16_t*)(s1);                                      // 0x001d6af8: lhu $v1, 0($s1)
    v0 = 0x49 << 16;                                            // 0x001d6afc: lui $v0, 0x49
    v0 = v0 + 0x1380;                                           // 0x001d6b00: addiu $v0, $v0, 0x1380
    a0 = 0xff;                                                  // 0x001d6b04: addiu $a0, $zero, 0xff
    v0 = v0 + v1;                                               // 0x001d6b08: addu $v0, $v0, $v1
    g_00491380 = a0;  // Global at 0x00491380                   // 0x001d6b0c: sb $a0, 0($v0)
label_0x1d6b10:
    s0 = s0 + 1;                                                // 0x001d6b10: addiu $s0, $s0, 1
    v0 = (s0 < 4) ? 1 : 0;                                      // 0x001d6b14: slti $v0, $s0, 4
    if (v0 != 0) goto label_0x1d6ad8;                           // 0x001d6b18: bnez $v0, 0x1d6ad8
    v1 = s0 << 2;                                               // 0x001d6b1c: sll $v1, $s0, 2
    func_0018db40();  // 0x18db10                                // 0x001d6b20: jal 0x18db10
    /* nop */                                                   // 0x001d6b24: nop 
    at = 0x49 << 16;                                            // 0x001d6b28: lui $at, 0x49
    v1 = 1;                                                     // 0x001d6b2c: addiu $v1, $zero, 1
    a0 = g_004912c8;  // Global at 0x004912c8                   // 0x001d6b30: lb $a0, 0x12c8($at)
    if (a0 == v1) goto label_0x1d6c70;                          // 0x001d6b34: beq $a0, $v1, 0x1d6c70
    a0 = 0x1200;                                                // 0x001d6b38: addiu $a0, $zero, 0x1200
    func_001d3c30();  // 0x1d3c20                                // 0x001d6b3c: jal 0x1d3c20
    /* nop */                                                   // 0x001d6b40: nop 
    func_001d71b0();  // 0x1d7130                                // 0x001d6b44: jal 0x1d7130
    /* nop */                                                   // 0x001d6b48: nop 
label_0x1d6b50:
    v0 = 0x49 << 16;                                            // 0x001d6b50: lui $v0, 0x49
    v1 = s3 << 1;                                               // 0x001d6b54: sll $v1, $s3, 1
    v0 = v0 + -0x190;                                           // 0x001d6b58: addiu $v0, $v0, -0x190
    v1 = v0 + v1;                                               // 0x001d6b5c: addu $v1, $v0, $v1
    v1 = *(uint16_t*)((v1) + 0xda0);                            // 0x001d6b60: lhu $v1, 0xda0($v1)
    v0 = 0 | 0xffff;                                            // 0x001d6b64: ori $v0, $zero, 0xffff
    if (v1 == v0) goto label_0x1d6bd8;                          // 0x001d6b68: beq $v1, $v0, 0x1d6bd8
    v0 = 0x36 << 16;                                            // 0x001d6b6c: lui $v0, 0x36
    v1 = v1 << 3;                                               // 0x001d6b70: sll $v1, $v1, 3
    v0 = v0 + -0x7930;                                          // 0x001d6b74: addiu $v0, $v0, -0x7930
    v0 = v0 + v1;                                               // 0x001d6b7c: addu $v0, $v0, $v1
    s2 = g_003586d0;  // Global at 0x003586d0                   // 0x001d6b80: lw $s2, 0($v0)
    v1 = s3 << 7;                                               // 0x001d6b84: sll $v1, $s3, 7
    v0 = 0x49 << 16;                                            // 0x001d6b88: lui $v0, 0x49
    v0 = v0 + -0x790;                                           // 0x001d6b8c: addiu $v0, $v0, -0x790
    s1 = v0 + v1;                                               // 0x001d6b90: addu $s1, $v0, $v1
label_0x1d6b94:
    v1 = *(int32_t*)(s1);                                       // 0x001d6b94: lw $v1, 0($s1)
    v0 = -1;                                                    // 0x001d6b98: addiu $v0, $zero, -1
    if (v1 == v0) goto label_0x1d6bc8;                          // 0x001d6b9c: beq $v1, $v0, 0x1d6bc8
    s1 = s1 + 4;                                                // 0x001d6ba0: addiu $s1, $s1, 4
    v0 = v1 << 4;                                               // 0x001d6ba4: sll $v0, $v1, 4
    v1 = s2 + v0;                                               // 0x001d6bac: addu $v1, $s2, $v0
    a1 = *(uint8_t*)(v1);                                       // 0x001d6bb0: lbu $a1, 0($v1)
    v0 = 0x8000 << 16;                                          // 0x001d6bb4: lui $v0, 0x8000
    a2 = *(uint8_t*)((v1) + 1);                                 // 0x001d6bb8: lbu $a2, 1($v1)
    t0 = *(uint8_t*)((v1) + 4);                                 // 0x001d6bbc: lbu $t0, 4($v1)
    func_001d5f60();  // 0x1d5d00                                // 0x001d6bc0: jal 0x1d5d00
    a3 = v0 | 2;                                                // 0x001d6bc4: ori $a3, $v0, 2
label_0x1d6bc8:
    s0 = s0 + 1;                                                // 0x001d6bc8: addiu $s0, $s0, 1
    v0 = (s0 < 0x20) ? 1 : 0;                                   // 0x001d6bcc: slti $v0, $s0, 0x20
    if (v0 != 0) goto label_0x1d6b94;                           // 0x001d6bd0: bnez $v0, 0x1d6b94
    /* nop */                                                   // 0x001d6bd4: nop 
label_0x1d6bd8:
    s3 = s3 + 1;                                                // 0x001d6bd8: addiu $s3, $s3, 1
    v0 = (s3 < 3) ? 1 : 0;                                      // 0x001d6bdc: slti $v0, $s3, 3
    if (v0 != 0) goto label_0x1d6b50;                           // 0x001d6be0: bnez $v0, 0x1d6b50
    /* nop */                                                   // 0x001d6be4: nop 
label_0x1d6bec:
    v0 = 0x49 << 16;                                            // 0x001d6bec: lui $v0, 0x49
    v1 = s3 << 1;                                               // 0x001d6bf0: sll $v1, $s3, 1
    v0 = v0 + -0x190;                                           // 0x001d6bf4: addiu $v0, $v0, -0x190
    v1 = v0 + v1;                                               // 0x001d6bf8: addu $v1, $v0, $v1
    s4 = *(uint16_t*)((v1) + 0xda0);                            // 0x001d6bfc: lhu $s4, 0xda0($v1)
    v0 = 0 | 0xffff;                                            // 0x001d6c00: ori $v0, $zero, 0xffff
    if (s4 == v0) goto label_0x1d6c58;                          // 0x001d6c04: beq $s4, $v0, 0x1d6c58
    /* nop */                                                   // 0x001d6c08: nop 
    s0 = *(uint16_t*)((v1) + 0xda6);                            // 0x001d6c0c: lhu $s0, 0xda6($v1)
    v0 = 0x49 << 16;                                            // 0x001d6c10: lui $v0, 0x49
    v0 = v0 + -0x790;                                           // 0x001d6c14: addiu $v0, $v0, -0x790
    v1 = s3 << 7;                                               // 0x001d6c1c: sll $v1, $s3, 7
    v0 = v0 + v1;                                               // 0x001d6c20: addu $v0, $v0, $v1
    s2 = v0 + 0x180;                                            // 0x001d6c24: addiu $s2, $v0, 0x180
label_0x1d6c28:
    v1 = g_0048f9f0;  // Global at 0x0048f9f0                   // 0x001d6c28: lw $v1, 0($s2)
    v0 = -1;                                                    // 0x001d6c2c: addiu $v0, $zero, -1
    if (v1 == v0) goto label_0x1d6c48;                          // 0x001d6c30: beq $v1, $v0, 0x1d6c48
    s2 = s2 + 4;                                                // 0x001d6c34: addiu $s2, $s2, 4
    a2 = v1 & 0xffff;                                           // 0x001d6c38: andi $a2, $v1, 0xffff
    a0 = s4 & 0xffff;                                           // 0x001d6c3c: andi $a0, $s4, 0xffff
    func_001d6700();  // 0x1d6630                                // 0x001d6c40: jal 0x1d6630
    a1 = s0 & 0xffff;                                           // 0x001d6c44: andi $a1, $s0, 0xffff
label_0x1d6c48:
    s1 = s1 + 1;                                                // 0x001d6c48: addiu $s1, $s1, 1
    v0 = (s1 < 0x20) ? 1 : 0;                                   // 0x001d6c4c: slti $v0, $s1, 0x20
    if (v0 != 0) goto label_0x1d6c28;                           // 0x001d6c50: bnez $v0, 0x1d6c28
    /* nop */                                                   // 0x001d6c54: nop 
label_0x1d6c58:
    s3 = s3 + 1;                                                // 0x001d6c58: addiu $s3, $s3, 1
    v0 = (s3 < 3) ? 1 : 0;                                      // 0x001d6c5c: slti $v0, $s3, 3
    if (v0 != 0) goto label_0x1d6bec;                           // 0x001d6c60: bnez $v0, 0x1d6bec
    /* nop */                                                   // 0x001d6c64: nop 
    func_0018db40();  // 0x18db10                                // 0x001d6c68: jal 0x18db10
    /* nop */                                                   // 0x001d6c6c: nop 
label_0x1d6c70:
    /* FPU: xori.b $w1, $w0, 0xb4 */                            // 0x001d6c74: xori.b $w1, $w0, 0xb4
    /* FPU: ld.b $w0, -0x4e($zero) */                           // 0x001d6c7c: ld.b $w0, -0x4e($zero)
    /* FPU: aver_u.h $w0, $w0, $w17 */                          // 0x001d6c80: aver_u.h $w0, $w0, $w17
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001d6c84: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001d6c88: jr $ra
    sp = sp + 0xb0;                                             // 0x001d6c8c: addiu $sp, $sp, 0xb0
}