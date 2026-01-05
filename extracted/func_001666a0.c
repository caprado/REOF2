void func_001666a0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001666a0: addiu $sp, $sp, -0x10
    func_001666e0();  // 1666e0                                // 0x001666b0: jal 0x1666e0
    func_001666e0();  // 1666e0                                // 0x001666bc: jal 0x1666e0
    a1 = 1;                                                     // 0x001666c0: addiu $a1, $zero, 1
    a1 = 2;                                                     // 0x001666cc: addiu $a1, $zero, 2
    goto label_0x1666e0;                                        // 0x001666d4: j 0x1666e0
    sp = sp + 0x10;                                             // 0x001666d8: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x001666dc: nop 
label_0x1666e0:
    v0 = a1 << 3;                                               // 0x001666e0: sll $v0, $a1, 3
    sp = sp + -0x10;                                            // 0x001666e4: addiu $sp, $sp, -0x10
    v0 = v0 - a1;                                               // 0x001666e8: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x001666f0: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x001666f8: addu $v0, $v0, $a1
    a0 = a0 + 0x1140;                                           // 0x001666fc: addiu $a0, $a0, 0x1140
    v0 = v0 << 2;                                               // 0x00166700: sll $v0, $v0, 2
    a2 = 5;                                                     // 0x00166704: addiu $a2, $zero, 5
    a0 = a0 + v0;                                               // 0x00166708: addu $a0, $a0, $v0
    v1 = *(int32_t*)(a0);                                       // 0x0016670c: lw $v1, 0($a0)
    if (v1 != a2) goto label_0x166738;                          // 0x00166710: bne $v1, $a2, 0x166738
    s0 = a0 + 0x10;                                             // 0x00166714: addiu $s0, $a0, 0x10
    v0 = *(int32_t*)((s0) + 4);                                 // 0x00166718: lw $v0, 4($s0)
    if (v0 == 0) goto label_0x166738;                           // 0x0016671c: beqz $v0, 0x166738
    v0 = *(int32_t*)(v0);                                       // 0x00166724: lw $v0, 0($v0)
    v1 = *(int32_t*)((v0) + 0xc);                               // 0x00166728: lw $v1, 0xc($v0)
    /* call function at address in v1 */                        // 0x0016672c: jalr $v1
    /* nop */                                                   // 0x00166730: nop 
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x00166734: sw $zero, 4($s0)
label_0x166738:
    return;                                                     // 0x00166740: jr $ra
    sp = sp + 0x10;                                             // 0x00166744: addiu $sp, $sp, 0x10
}