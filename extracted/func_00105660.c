void func_00105660() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0;
    
    sp = sp + -0x30;                                            // 0x00105660: addiu $sp, $sp, -0x30
    func_001055a8();  // 1055a8                                // 0x00105680: jal 0x1055a8
    if (s1 == 0) goto label_0x105724;                           // 0x0010568c: beqz $s1, 0x105724
    func_001053e0();  // 1053e0                                // 0x00105694: jal 0x1053e0
    /* nop */                                                   // 0x00105698: nop 
    if (s0 == 0) goto label_0x105724;                           // 0x001056a4: beqz $s0, 0x105724
    a3 = 0x1b6;                                                 // 0x001056a8: addiu $a3, $zero, 0x1b6
    a0 = *(int32_t*)((s0) + 0x54);                              // 0x001056ac: lw $a0, 0x54($s0)
    func_00108e18();  // 108e18                                // 0x001056b0: jal 0x108e18
    a2 = local_0;                                               // 0x001056b4: lw $a2, 0($sp)
    v1 = 0x11 << 16;                                            // 0x001056b8: lui $v1, 0x11
    a0 = 0x11 << 16;                                            // 0x001056c4: lui $a0, 0x11
    a1 = 0x11 << 16;                                            // 0x001056c8: lui $a1, 0x11
    a2 = 0x11 << 16;                                            // 0x001056cc: lui $a2, 0x11
    v1 = v1 + -0x59e8;                                          // 0x001056d0: addiu $v1, $v1, -0x59e8
    a0 = a0 + -0x5980;                                          // 0x001056d4: addiu $a0, $a0, -0x5980
    a1 = a1 + -0x5900;                                          // 0x001056d8: addiu $a1, $a1, -0x5900
    a2 = a2 + -0x5898;                                          // 0x001056dc: addiu $a2, $a2, -0x5898
    if (a3 >= 0) goto label_0x1056f0;                           // 0x001056e0: bgez $a3, 0x1056f0
    t0 = s1 & 0x100;                                            // 0x001056e4: andi $t0, $s1, 0x100
    goto label_0x105724;                                        // 0x001056e8: b 0x105724
    *(uint16_t*)((s0) + 0xc) = 0;                               // 0x001056ec: sh $zero, 0xc($s0)
label_0x1056f0:
    *(uint16_t*)((s0) + 0xe) = a3;                              // 0x001056f0: sh $a3, 0xe($s0)
    *(uint32_t*)((s0) + 0x20) = v1;                             // 0x001056f4: sw $v1, 0x20($s0)
    *(uint32_t*)((s0) + 0x24) = a0;                             // 0x001056f8: sw $a0, 0x24($s0)
    *(uint32_t*)((s0) + 0x28) = a1;                             // 0x001056fc: sw $a1, 0x28($s0)
    *(uint32_t*)((s0) + 0x2c) = a2;                             // 0x00105700: sw $a2, 0x2c($s0)
    *(uint16_t*)((s0) + 0xc) = s1;                              // 0x00105704: sh $s1, 0xc($s0)
    if (t0 == 0) goto label_0x105720;                           // 0x00105708: beqz $t0, 0x105720
    *(uint32_t*)((s0) + 0x1c) = s0;                             // 0x0010570c: sw $s0, 0x1c($s0)
    func_00105d48();  // 105d48                                // 0x00105718: jal 0x105d48
    a2 = 2;                                                     // 0x0010571c: addiu $a2, $zero, 2
label_0x105720:
label_0x105724:
    return;                                                     // 0x00105734: jr $ra
    sp = sp + 0x30;                                             // 0x00105738: addiu $sp, $sp, 0x30
}