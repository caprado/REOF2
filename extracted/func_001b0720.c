void func_001b0720() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001b0720: addiu $sp, $sp, -0x10
    a1 = *(int32_t*)((gp) + -0x6430);                           // 0x001b072c: lw $a1, -0x6430($gp)
    goto label_0x1b0760;                                        // 0x001b0730: b 0x1b0760
    v1 = 2;                                                     // 0x001b0734: addiu $v1, $zero, 2
label_0x1b0738:
    v0 = a0 << 4;                                               // 0x001b0738: sll $v0, $a0, 4
    v0 = v0 - a0;                                               // 0x001b073c: subu $v0, $v0, $a0
    v0 = v0 << 3;                                               // 0x001b0740: sll $v0, $v0, 3
    v0 = a1 + v0;                                               // 0x001b0744: addu $v0, $a1, $v0
    v0 = *(uint8_t*)(v0);                                       // 0x001b0748: lbu $v0, 0($v0)
    if (v0 != v1) goto label_0x1b075c;                          // 0x001b074c: bne $v0, $v1, 0x1b075c
    v0 = a2 + 1;                                                // 0x001b0750: addiu $v0, $a2, 1
    goto label_0x1b07bc;                                        // 0x001b0754: b 0x1b07bc
    v0 = -1;                                                    // 0x001b0758: addiu $v0, $zero, -1
label_0x1b075c:
    a2 = v0 & 0xff;                                             // 0x001b075c: andi $a2, $v0, 0xff
label_0x1b0760:
    v0 = a2 & 0xff;                                             // 0x001b0760: andi $v0, $a2, 0xff
    if (v0 <= 0) goto label_0x1b0738;                           // 0x001b0764: blez $v0, 0x1b0738
    a0 = a2 & 0xff;                                             // 0x001b0768: andi $a0, $a2, 0xff
    func_001a19f0();  // 1a19f0                                // 0x001b076c: jal 0x1a19f0
    a0 = 1;                                                     // 0x001b0770: addiu $a0, $zero, 1
    a0 = *(int32_t*)((gp) + -0x6430);                           // 0x001b0774: lw $a0, -0x6430($gp)
    v1 = *(uint16_t*)((a0) + 2);                                // 0x001b0778: lhu $v1, 2($a0)
    if (v1 != 0) goto label_0x1b078c;                           // 0x001b077c: bnez $v1, 0x1b078c
    v0 = 1;                                                     // 0x001b0780: addiu $v0, $zero, 1
    goto label_0x1b07bc;                                        // 0x001b0784: b 0x1b07bc
    v0 = -2;                                                    // 0x001b0788: addiu $v0, $zero, -2
label_0x1b078c:
    if (v1 != v0) goto label_0x1b07a4;                          // 0x001b078c: bne $v1, $v0, 0x1b07a4
    /* nop */                                                   // 0x001b0790: nop 
    v1 = *(uint8_t*)((a0) + 1);                                 // 0x001b0794: lbu $v1, 1($a0)
    v0 = 0x73;                                                  // 0x001b0798: addiu $v0, $zero, 0x73
    if (v1 == v0) goto label_0x1b07ac;                          // 0x001b079c: beq $v1, $v0, 0x1b07ac
    /* nop */                                                   // 0x001b07a0: nop 
label_0x1b07a4:
    goto label_0x1b07bc;                                        // 0x001b07a4: b 0x1b07bc
    v0 = -2;                                                    // 0x001b07a8: addiu $v0, $zero, -2
label_0x1b07ac:
    func_001a1990();  // 1a1990                                // 0x001b07ac: jal 0x1a1990
    /* nop */                                                   // 0x001b07b0: nop 
label_0x1b07bc:
    return;                                                     // 0x001b07c0: jr $ra
    sp = sp + 0x10;                                             // 0x001b07c4: addiu $sp, $sp, 0x10
}