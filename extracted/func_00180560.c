void func_00180560() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = 0x334;                                                 // 0x00180560: addiu $v1, $zero, 0x334
    sp = sp + -0x30;                                            // 0x00180564: addiu $sp, $sp, -0x30
    v0 = 0x26 << 16;                                            // 0x0018056c: lui $v0, 0x26
    v0 = v0 + 0x7908;                                           // 0x00180574: addiu $v0, $v0, 0x7908
    s1 = 1;                                                     // 0x0018057c: addiu $s1, $zero, 1
    v0 = v0 + a0;                                               // 0x00180584: addu $v0, $v0, $a0
    s0 = g_00267918;  // Global at 0x00267918                   // 0x00180588: lw $s0, 0x10($v0)
    *(uint8_t*)(s0) = 0;                                        // 0x0018058c: sb $zero, 0($s0)
label_0x180590:
    a0 = s0 + 0x1c;                                             // 0x00180590: addiu $a0, $s0, 0x1c
    *(uint32_t*)((s0) + 0x7c) = 0;                              // 0x00180594: sw $zero, 0x7c($s0)
    a1 = 0xff;                                                  // 0x00180598: addiu $a1, $zero, 0xff
    *(uint8_t*)((s0) + 1) = 0;                                  // 0x0018059c: sb $zero, 1($s0)
    a2 = 0x20;                                                  // 0x001805a0: addiu $a2, $zero, 0x20
    *(uint8_t*)((s0) + 3) = 0;                                  // 0x001805a4: sb $zero, 3($s0)
    s1 = s1 + -1;                                               // 0x001805a8: addiu $s1, $s1, -1
    *(uint8_t*)((s0) + 2) = 0;                                  // 0x001805ac: sb $zero, 2($s0)
    *(uint32_t*)((s0) + 4) = 0;                                 // 0x001805b0: sw $zero, 4($s0)
    func_00107c70();  // 107c70                                // 0x001805b4: jal 0x107c70
    s0 = s0 + 0x80;                                             // 0x001805b8: addiu $s0, $s0, 0x80
    if (s1 >= 0) goto label_0x180590;                           // 0x001805bc: bgezl $s1, 0x180590
    *(uint8_t*)(s0) = 0;                                        // 0x001805c0: sb $zero, 0($s0)
    return;                                                     // 0x001805d0: jr $ra
    sp = sp + 0x30;                                             // 0x001805d4: addiu $sp, $sp, 0x30
}