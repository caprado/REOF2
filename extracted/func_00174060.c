void func_00174060() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00174060: addiu $sp, $sp, -0x20
    v0 = *(int32_t*)((s0) + 8);                                 // 0x0017407c: lw $v0, 8($s0)
    if (v0 == 0) goto label_0x1740f4;                           // 0x00174080: beqz $v0, 0x1740f4
    func_00174108();  // 174108                                // 0x00174088: jal 0x174108
    /* nop */                                                   // 0x0017408c: nop 
    v0 = -1;                                                    // 0x00174094: addiu $v0, $zero, -1
    if (a2 == v0) goto label_0x1740f8;                          // 0x00174098: beql $a2, $v0, 0x1740f8
    v1 = *(int32_t*)((s0) + 0x10);                              // 0x001740a0: lw $v1, 0x10($s0)
    v0 = *(int32_t*)((s0) + 4);                                 // 0x001740a4: lw $v0, 4($s0)
    v1 = v1 + a2;                                               // 0x001740a8: addu $v1, $v1, $a2
    a0 = *(int32_t*)((s0) + 8);                                 // 0x001740ac: lw $a0, 8($s0)
    a1 = v1 - v0;                                               // 0x001740b0: subu $a1, $v1, $v0
    v0 = (v1 < v0) ? 1 : 0;                                     // 0x001740b4: slt $v0, $v1, $v0
    if (v0 == 0) v1 = a1;                                       // 0x001740b8: movz $v1, $a1, $v0
    a1 = *(int32_t*)(s0);                                       // 0x001740bc: lw $a1, 0($s0)
    v0 = v1 << 1;                                               // 0x001740c0: sll $v0, $v1, 1
    a0 = a0 - a2;                                               // 0x001740c4: subu $a0, $a0, $a2
    v0 = v0 + v1;                                               // 0x001740c8: addu $v0, $v0, $v1
    *(uint32_t*)((s0) + 8) = a0;                                // 0x001740cc: sw $a0, 8($s0)
    *(uint32_t*)((s0) + 0x10) = v1;                             // 0x001740d0: sw $v1, 0x10($s0)
    v0 = v0 << 2;                                               // 0x001740d4: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x001740d8: addu $v0, $v0, $a1
    a0 = *(int32_t*)((v0) + 8);                                 // 0x001740e4: lw $a0, 8($v0)
    *(uint32_t*)((s1) + 8) = a0;                                // 0x001740f0: sw $a0, 8($s1)
label_0x1740f4:
label_0x1740f8:
    return;                                                     // 0x00174100: jr $ra
    sp = sp + 0x20;                                             // 0x00174104: addiu $sp, $sp, 0x20
}