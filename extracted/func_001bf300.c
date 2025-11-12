void func_001bf300() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bf300: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001bf304: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001bf310: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x1bf384;                          // 0x001bf314: beq $v1, $v0, 0x1bf384
    if (v1 == 0) goto label_0x1bf32c;                           // 0x001bf31c: beqz $v1, 0x1bf32c
    /* nop */                                                   // 0x001bf320: nop 
    goto label_0x1bf3a8;                                        // 0x001bf324: b 0x1bf3a8
    v0 = -1;                                                    // 0x001bf328: addiu $v0, $zero, -1
label_0x1bf32c:
    func_001bf010();  // 0x1befe0                                // 0x001bf32c: jal 0x1befe0
    /* nop */                                                   // 0x001bf330: nop 
    if (v0 < 0) goto label_0x1bf3a4;                            // 0x001bf334: bltz $v0, 0x1bf3a4
    /* nop */                                                   // 0x001bf338: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf33c: lw $v1, 0x14($s0)
    v0 = gp + -0x6300;                                          // 0x001bf340: addiu $v0, $gp, -0x6300
    t0 = *(int32_t*)((s0) + 0xbc);                              // 0x001bf344: lw $t0, 0xbc($s0)
    a1 = s0 + 0x72;                                             // 0x001bf348: addiu $a1, $s0, 0x72
    a2 = *(int32_t*)((s0) + 0xd0);                              // 0x001bf34c: lw $a2, 0xd0($s0)
    v1 = v1 << 2;                                               // 0x001bf350: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf354: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001bf358: lw $a0, 0($v0)
    func_001811e8();  // 0x1810c8                                // 0x001bf35c: jal 0x1810c8
    if (v0 >= 0) goto label_0x1bf374;                           // 0x001bf364: bgez $v0, 0x1bf374
    /* nop */                                                   // 0x001bf368: nop 
    goto label_0x1bf3a8;                                        // 0x001bf36c: b 0x1bf3a8
    v0 = 1;                                                     // 0x001bf370: addiu $v0, $zero, 1
label_0x1bf374:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf374: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf378: addiu $v0, $v0, 1
    goto label_0x1bf3a4;                                        // 0x001bf37c: b 0x1bf3a4
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf380: sw $v0, 4($s0)
label_0x1bf384:
    func_001bf010();  // 0x1befe0                                // 0x001bf384: jal 0x1befe0
    /* nop */                                                   // 0x001bf388: nop 
    if (v0 < 0) goto label_0x1bf3a4;                            // 0x001bf38c: bltz $v0, 0x1bf3a4
    /* nop */                                                   // 0x001bf390: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf394: sw $zero, 4($s0)
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001bf398: lw $v0, 0x1c($s0)
    goto label_0x1bf3a8;                                        // 0x001bf39c: b 0x1bf3a8
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001bf3a0: slt $v0, $v0, $zero
label_0x1bf3a4:
    v0 = -1;                                                    // 0x001bf3a4: addiu $v0, $zero, -1
label_0x1bf3a8:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bf3ac: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bf3b0: jr $ra
    sp = sp + 0x20;                                             // 0x001bf3b4: addiu $sp, $sp, 0x20
}