void func_001bf210() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bf210: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001bf214: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001bf220: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x1bf290;                          // 0x001bf224: beq $v1, $v0, 0x1bf290
    if (v1 == 0) goto label_0x1bf23c;                           // 0x001bf22c: beqz $v1, 0x1bf23c
    /* nop */                                                   // 0x001bf230: nop 
    goto label_0x1bf2ec;                                        // 0x001bf234: b 0x1bf2ec
    v0 = -1;                                                    // 0x001bf238: addiu $v0, $zero, -1
label_0x1bf23c:
    func_001befe0();  // 1befe0                                // 0x001bf23c: jal 0x1befe0
    /* nop */                                                   // 0x001bf240: nop 
    if (v0 < 0) goto label_0x1bf2e8;                            // 0x001bf244: bltz $v0, 0x1bf2e8
    /* nop */                                                   // 0x001bf248: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf24c: lw $v1, 0x14($s0)
    a2 = 0x31 << 16;                                            // 0x001bf250: lui $a2, 0x31
    v0 = gp + -0x6300;                                          // 0x001bf254: addiu $v0, $gp, -0x6300
    a1 = s0 + 0x72;                                             // 0x001bf258: addiu $a1, $s0, 0x72
    v1 = v1 << 2;                                               // 0x001bf25c: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf260: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001bf264: lw $a0, 0($v0)
    func_00180f18();  // 180f18                                // 0x001bf268: jal 0x180f18
    a2 = a2 + 0x5e20;                                           // 0x001bf26c: addiu $a2, $a2, 0x5e20
    if (v0 >= 0) goto label_0x1bf280;                           // 0x001bf270: bgez $v0, 0x1bf280
    /* nop */                                                   // 0x001bf274: nop 
    goto label_0x1bf2ec;                                        // 0x001bf278: b 0x1bf2ec
    v0 = 1;                                                     // 0x001bf27c: addiu $v0, $zero, 1
label_0x1bf280:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf280: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf284: addiu $v0, $v0, 1
    goto label_0x1bf2e8;                                        // 0x001bf288: b 0x1bf2e8
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf28c: sw $v0, 4($s0)
label_0x1bf290:
    func_001befe0();  // 1befe0                                // 0x001bf290: jal 0x1befe0
    /* nop */                                                   // 0x001bf294: nop 
    if (v0 < 0) goto label_0x1bf2e8;                            // 0x001bf298: bltz $v0, 0x1bf2e8
    /* nop */                                                   // 0x001bf29c: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf2a0: sw $zero, 4($s0)
    v0 = 0 | 0x9002;                                            // 0x001bf2a4: ori $v0, $zero, 0x9002
    v1 = *(uint16_t*)((s0) + 0x1c);                             // 0x001bf2a8: lhu $v1, 0x1c($s0)
    if (v1 == v0) goto label_0x1bf2e0;                          // 0x001bf2ac: beq $v1, $v0, 0x1bf2e0
    v0 = 3;                                                     // 0x001bf2b0: addiu $v0, $zero, 3
    v0 = 2;                                                     // 0x001bf2b4: addiu $v0, $zero, 2
    if (v1 == v0) goto label_0x1bf2d8;                          // 0x001bf2b8: beq $v1, $v0, 0x1bf2d8
    /* nop */                                                   // 0x001bf2bc: nop 
    if (v1 == 0) goto label_0x1bf2d0;                           // 0x001bf2c0: beqz $v1, 0x1bf2d0
    /* nop */                                                   // 0x001bf2c4: nop 
    goto label_0x1bf2e0;                                        // 0x001bf2c8: b 0x1bf2e0
    /* nop */                                                   // 0x001bf2cc: nop 
label_0x1bf2d0:
    goto label_0x1bf2e0;                                        // 0x001bf2d0: b 0x1bf2e0
label_0x1bf2d8:
    goto label_0x1bf2e0;                                        // 0x001bf2d8: b 0x1bf2e0
    v0 = 1;                                                     // 0x001bf2dc: addiu $v0, $zero, 1
label_0x1bf2e0:
    goto label_0x1bf2f0;                                        // 0x001bf2e0: b 0x1bf2f0
label_0x1bf2e8:
    v0 = -1;                                                    // 0x001bf2e8: addiu $v0, $zero, -1
label_0x1bf2ec:
label_0x1bf2f0:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bf2f0: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bf2f4: jr $ra
    sp = sp + 0x20;                                             // 0x001bf2f8: addiu $sp, $sp, 0x20
}