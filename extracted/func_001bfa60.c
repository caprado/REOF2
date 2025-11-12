void func_001bfa60() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x001bfa60: addiu $sp, $sp, -0x20
    v0 = 1;                                                     // 0x001bfa64: addiu $v0, $zero, 1
    v1 = *(int32_t*)((a0) + 4);                                 // 0x001bfa70: lw $v1, 4($a0)
    if (v1 == v0) goto label_0x1bfaec;                          // 0x001bfa74: beq $v1, $v0, 0x1bfaec
    if (v1 == 0) goto label_0x1bfa8c;                           // 0x001bfa7c: beqz $v1, 0x1bfa8c
    /* nop */                                                   // 0x001bfa80: nop 
    goto label_0x1bfb10;                                        // 0x001bfa84: b 0x1bfb10
    v0 = -1;                                                    // 0x001bfa88: addiu $v0, $zero, -1
label_0x1bfa8c:
    func_001bf010();  // 0x1befe0                                // 0x001bfa8c: jal 0x1befe0
    /* nop */                                                   // 0x001bfa90: nop 
    if (v0 < 0) goto label_0x1bfb0c;                            // 0x001bfa94: bltz $v0, 0x1bfb0c
    /* nop */                                                   // 0x001bfa98: nop 
    *(uint32_t*)((s0) + 0xc) = 0;                               // 0x001bfa9c: sw $zero, 0xc($s0)
    v0 = gp + -0x6300;                                          // 0x001bfaa0: addiu $v0, $gp, -0x6300
    v1 = *(int32_t*)((s0) + 0x14);                              // 0x001bfaa4: lw $v1, 0x14($s0)
    a1 = s0 + 0x72;                                             // 0x001bfaa8: addiu $a1, $s0, 0x72
    t0 = *(int32_t*)((s0) + 0xd0);                              // 0x001bfaac: lw $t0, 0xd0($s0)
    a3 = 0x100;                                                 // 0x001bfab4: addiu $a3, $zero, 0x100
    v1 = v1 << 2;                                               // 0x001bfab8: sll $v1, $v1, 2
    v0 = v0 + v1;                                               // 0x001bfabc: addu $v0, $v0, $v1
    a0 = *(int32_t*)(v0);                                       // 0x001bfac0: lw $a0, 0($v0)
    func_00181618();  // 0x1814e8                                // 0x001bfac4: jal 0x1814e8
    t1 = s0 + 0xc;                                              // 0x001bfac8: addiu $t1, $s0, 0xc
    if (v0 >= 0) goto label_0x1bfadc;                           // 0x001bfacc: bgez $v0, 0x1bfadc
    /* nop */                                                   // 0x001bfad0: nop 
    goto label_0x1bfb10;                                        // 0x001bfad4: b 0x1bfb10
    v0 = 1;                                                     // 0x001bfad8: addiu $v0, $zero, 1
label_0x1bfadc:
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001bfadc: lw $v0, 4($s0)
    v0 = v0 + 1;                                                // 0x001bfae0: addiu $v0, $v0, 1
    goto label_0x1bfb0c;                                        // 0x001bfae4: b 0x1bfb0c
    *(uint32_t*)((s0) + 4) = v0;                                // 0x001bfae8: sw $v0, 4($s0)
label_0x1bfaec:
    func_001bf010();  // 0x1befe0                                // 0x001bfaec: jal 0x1befe0
    /* nop */                                                   // 0x001bfaf0: nop 
    if (v0 < 0) goto label_0x1bfb0c;                            // 0x001bfaf4: bltz $v0, 0x1bfb0c
    /* nop */                                                   // 0x001bfaf8: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001bfafc: sw $zero, 4($s0)
    v0 = *(int32_t*)((s0) + 0x1c);                              // 0x001bfb00: lw $v0, 0x1c($s0)
    goto label_0x1bfb10;                                        // 0x001bfb04: b 0x1bfb10
    v0 = (v0 < 0) ? 1 : 0;                                      // 0x001bfb08: slt $v0, $v0, $zero
label_0x1bfb0c:
    v0 = -1;                                                    // 0x001bfb0c: addiu $v0, $zero, -1
label_0x1bfb10:
    /* FPU: xori.b $w0, $w0, 0xb0 */                            // 0x001bfb14: xori.b $w0, $w0, 0xb0
    return;                                                     // 0x001bfb18: jr $ra
    sp = sp + 0x20;                                             // 0x001bfb1c: addiu $sp, $sp, 0x20
}