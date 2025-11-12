void func_001bf680() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bf680: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001bf684: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001bf690: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x1bf6f8;                          // 0x001bf694: beq $v1, $v0, 0x1bf6f8
    if (v1 == 0) goto label_0x1bf6ac;                           // 0x001bf69c: beqz $v1, 0x1bf6ac
    /* nop */                                                   // 0x001bf6a0: nop 
    goto label_0x1bf71c;                                        // 0x001bf6a4: b 0x1bf71c
    v0 = -1;                                                    // 0x001bf6a8: addiu $v0, $zero, -1
label_0x1bf6ac:
    func_001bf010();  // 0x1befe0                                // 0x001bf6ac: jal 0x1befe0
    /* nop */                                                   // 0x001bf6b0: nop 
    if (v0 < 0) goto label_0x1bf718;                            // 0x001bf6b4: bltz $v0, 0x1bf718
    /* nop */                                                   // 0x001bf6b8: nop 
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bf6bc: lw $v1, 0x14($s0)
    v0 = gp + -0x6300;                                          // 0x001bf6c0: addiu $v0, $gp, -0x6300
    v1 = v1 << 2;                                               // 0x001bf6c4: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bf6c8: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001bf6cc: lw $a0, 0($v0)
    func_001814e8();  // 0x181400                                // 0x001bf6d0: jal 0x181400
    a1 = s0 + 0x72;                                             // 0x001bf6d4: addiu $a1, $s0, 0x72
    if (v0 >= 0) goto label_0x1bf6e8;                           // 0x001bf6d8: bgez $v0, 0x1bf6e8
    /* nop */                                                   // 0x001bf6dc: nop 
    goto label_0x1bf71c;                                        // 0x001bf6e0: b 0x1bf71c
    v0 = 1;                                                     // 0x001bf6e4: addiu $v0, $zero, 1
label_0x1bf6e8:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bf6e8: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bf6ec: addiu $v0, $v0, 1
    goto label_0x1bf718;                                        // 0x001bf6f0: b 0x1bf718
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bf6f4: sw $v0, 4($s0)
label_0x1bf6f8:
    func_001bf010();  // 0x1befe0                                // 0x001bf6f8: jal 0x1befe0
    /* nop */                                                   // 0x001bf6fc: nop 
    if (v0 < 0) goto label_0x1bf718;                            // 0x001bf700: bltz $v0, 0x1bf718
    /* nop */                                                   // 0x001bf704: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bf708: sw $zero, 4($s0)
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001bf70c: lw $v0, 0x1c($s0)
    goto label_0x1bf71c;                                        // 0x001bf710: b 0x1bf71c
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001bf714: slt $v0, $v0, $zero
label_0x1bf718:
    v0 = -1;                                                    // 0x001bf718: addiu $v0, $zero, -1
label_0x1bf71c:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bf720: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bf724: jr $ra
    sp = sp + 0x20;                                             // 0x001bf728: addiu $sp, $sp, 0x20
}