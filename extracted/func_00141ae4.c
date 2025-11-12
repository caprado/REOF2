void func_00141ae4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x40;                                            // 0x00141ae4: addiu $sp, $sp, -0x40
    v0 = v0 + a0;                                               // 0x00141ae8: addu $v0, $v0, $a0
    v0 = v0 << 4;                                               // 0x00141af0: sll $v0, $v0, 4
    s4 = a0 << 2;                                               // 0x00141af8: sll $s4, $a0, 2
    s1 = 0x21 << 16;                                            // 0x00141b04: lui $s1, 0x21
    s1 = s1 + 0xc18;                                            // 0x00141b08: addiu $s1, $s1, 0xc18
    s1 = s1 + s4;                                               // 0x00141b0c: addu $s1, $s1, $s4
    s2 = 5;                                                     // 0x00141b14: addiu $s2, $zero, 5
    s5 = 1;                                                     // 0x00141b24: addiu $s5, $zero, 1
    s0 = 0x25 << 16;                                            // 0x00141b28: lui $s0, 0x25
    s0 = s0 + 0x5fa0;                                           // 0x00141b2c: addiu $s0, $s0, 0x5fa0
    s0 = s0 + v0;                                               // 0x00141b30: addu $s0, $s0, $v0
    /* nop */                                                   // 0x00141b34: nop 
label_0x141b38:
    v0 = g_00255fa0;  // Global at 0x00255fa0                   // 0x00141b38: lw $v0, 0($s0)
    /* beqzl $v0, 0x141b5c */                                   // 0x00141b3c: beqzl $v0, 0x141b5c
    s2 = s2 + -1;                                               // 0x00141b40: addiu $s2, $s2, -1
    g_00210c18 = s5;  // Global at 0x00210c18                   // 0x00141b44: sw $s5, 0($s1)
    /* call function at address in v0 */                        // 0x00141b48: jalr $v0
    a0 = g_00255fa4;  // Global at 0x00255fa4                   // 0x00141b4c: lw $a0, 4($s0)
    g_00210c18 = 0;  // Global at 0x00210c18                    // 0x00141b50: sw $zero, 0($s1)
    s3 = s3 | v0;                                               // 0x00141b54: or $s3, $s3, $v0
    s2 = s2 + -1;                                               // 0x00141b58: addiu $s2, $s2, -1
    if (s2 >= 0) goto label_0x141b38;                           // 0x00141b5c: bgez $s2, 0x141b38
    s0 = s0 + 8;                                                // 0x00141b60: addiu $s0, $s0, 8
    a0 = 0x21 << 16;                                            // 0x00141b64: lui $a0, 0x21
    a0 = a0 + 0xbf8;                                            // 0x00141b68: addiu $a0, $a0, 0xbf8
    a0 = a0 + s4;                                               // 0x00141b6c: addu $a0, $a0, $s4
    v1 = g_00210bf8;  // Global at 0x00210bf8                   // 0x00141b74: lw $v1, 0($a0)
    v1 = v1 + 1;                                                // 0x00141b84: addiu $v1, $v1, 1
    g_00210bf8 = v1;  // Global at 0x00210bf8                   // 0x00141b98: sw $v1, 0($a0)
    return;                                                     // 0x00141b9c: jr $ra
    sp = sp + 0x40;                                             // 0x00141ba0: addiu $sp, $sp, 0x40
}