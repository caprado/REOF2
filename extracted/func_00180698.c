void func_00180698() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    // Stack local variables
    uint32_t local_0, local_4;
    
    v1 = 0x334;                                                 // 0x00180698: addiu $v1, $zero, 0x334
    sp = sp + -0x20;                                            // 0x0018069c: addiu $sp, $sp, -0x20
    v0 = 0x26 << 16;                                            // 0x001806a4: lui $v0, 0x26
    v0 = v0 + 0x7908;                                           // 0x001806ac: addiu $v0, $v0, 0x7908
    v0 = v0 + a0;                                               // 0x001806b0: addu $v0, $v0, $a0
    v1 = g_00267918;  // Global at 0x00267918                   // 0x001806b4: lw $v1, 0x10($v0)
    v0 = v1 + 0x80;                                             // 0x001806bc: addiu $v0, $v1, 0x80
    local_4 = v0;                                               // 0x001806c0: sw $v0, 4($sp)
    a1 = a0 + 0x100;                                            // 0x001806c4: addiu $a1, $a0, 0x100
    func_00114c70();  // 0x114bd8                                // 0x001806c8: jal 0x114bd8
    local_0 = v1;                                               // 0x001806cc: sw $v1, 0($sp)
    a0 = local_0;                                               // 0x001806d0: lw $a0, 0($sp)
    a1 = local_4;                                               // 0x001806d4: lw $a1, 4($sp)
    v0 = *(int32_t*)((a0) + 0x7c);                              // 0x001806d8: lw $v0, 0x7c($a0)
    v1 = *(int32_t*)((a1) + 0x7c);                              // 0x001806dc: lw $v1, 0x7c($a1)
    v0 = (v0 < v1) ? 1 : 0;                                     // 0x001806e4: slt $v0, $v0, $v1
    v0 = v0 << 2;                                               // 0x001806e8: sll $v0, $v0, 2
    v1 = sp + v0;                                               // 0x001806ec: addu $v1, $sp, $v0
    v0 = *(int32_t*)(v1);                                       // 0x001806f0: lw $v0, 0($v1)
    return;                                                     // 0x001806f4: jr $ra
    sp = sp + 0x20;                                             // 0x001806f8: addiu $sp, $sp, 0x20
}