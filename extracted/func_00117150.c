void func_00117150() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x00117150: addiu $sp, $sp, -0x30
    a1 = *(int32_t*)((s1) + 0x10);                              // 0x00117168: lw $a1, 0x10($s1)
    v0 = a1 & 4;                                                // 0x0011716c: andi $v0, $a1, 4
    if (v0 == 0) goto label_0x117188;                           // 0x00117170: beqz $v0, 0x117188
    /* nop */                                                   // 0x00117174: nop 
    func_00117040();  // 0x117000                                // 0x00117178: jal 0x117000
    a1 = (unsigned)a1 >> 0x10;                                  // 0x0011717c: srl $a1, $a1, 0x10
    goto label_0x117194;                                        // 0x00117180: b 0x117194
label_0x117188:
    func_00117000();  // 0x116fd0                                // 0x00117188: jal 0x116fd0
    /* nop */                                                   // 0x0011718c: nop 
label_0x117194:
    v1 = *(int32_t*)((s1) + 0x14);                              // 0x00117194: lw $v1, 0x14($s1)
    v0 = 0x8000 << 16;                                          // 0x00117198: lui $v0, 0x8000
    a1 = *(int32_t*)((s1) + 0x1c);                              // 0x0011719c: lw $a1, 0x1c($s1)
    v0 = v0 | 0xc;                                              // 0x001171a0: ori $v0, $v0, 0xc
    *(uint32_t*)((s0) + 0x14) = v1;                             // 0x001171a4: sw $v1, 0x14($s0)
    a0 = 0x8000 << 16;                                          // 0x001171a8: lui $a0, 0x8000
    *(uint32_t*)((s0) + 0x1c) = a1;                             // 0x001171ac: sw $a1, 0x1c($s0)
    a0 = a0 | 8;                                                // 0x001171b0: ori $a0, $a0, 8
    *(uint32_t*)((s0) + 0x20) = v0;                             // 0x001171b4: sw $v0, 0x20($s0)
    a2 = 0x40;                                                  // 0x001171bc: addiu $a2, $zero, 0x40
    v0 = *(int32_t*)((s1) + 0x20);                              // 0x001171c0: lw $v0, 0x20($s1)
    *(uint32_t*)((s0) + 0x24) = v0;                             // 0x001171c4: sw $v0, 0x24($s0)
    v1 = *(int32_t*)((s1) + 0x24);                              // 0x001171c8: lw $v1, 0x24($s1)
    *(uint32_t*)((s0) + 0x28) = v1;                             // 0x001171cc: sw $v1, 0x28($s0)
    v0 = *(int32_t*)((s1) + 0x28);                              // 0x001171d0: lw $v0, 0x28($s1)
    *(uint32_t*)((s0) + 0x2c) = v0;                             // 0x001171d4: sw $v0, 0x2c($s0)
    t1 = *(int32_t*)((s1) + 0x28);                              // 0x001171d8: lw $t1, 0x28($s1)
    a3 = *(int32_t*)((s1) + 0x20);                              // 0x001171dc: lw $a3, 0x20($s1)
    func_00116b48();  // 0x116b08                                // 0x001171e0: jal 0x116b08
    t0 = *(int32_t*)((s1) + 0x24);                              // 0x001171e4: lw $t0, 0x24($s1)
    if (v0 != 0) goto label_0x117210;                           // 0x001171e8: bnez $v0, 0x117210
    a1 = 0x11 << 16;                                            // 0x001171f4: lui $a1, 0x11
    a1 = a1 + 0x7110;                                           // 0x001171f8: addiu $a1, $a1, 0x7110
    a0 = 0x800;                                                 // 0x00117200: addiu $a0, $zero, 0x800
    return func_0011f1b8();  // Tail call                        // 0x00117208: j 0x11f0c8
    sp = sp + 0x30;                                             // 0x0011720c: addiu $sp, $sp, 0x30
label_0x117210:
    return;                                                     // 0x00117218: jr $ra
    sp = sp + 0x30;                                             // 0x0011721c: addiu $sp, $sp, 0x30
}