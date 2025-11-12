void func_001678f4() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x001678f4: addiu $sp, $sp, -0x10
    v0 = v0 - a1;                                               // 0x001678f8: subu $v0, $v0, $a1
    v0 = v0 << 2;                                               // 0x00167900: sll $v0, $v0, 2
    v0 = v0 + a1;                                               // 0x00167908: addu $v0, $v0, $a1
    t0 = s0 + 0x1140;                                           // 0x00167914: addiu $t0, $s0, 0x1140
    v0 = v0 << 2;                                               // 0x00167918: sll $v0, $v0, 2
    t0 = t0 + v0;                                               // 0x00167920: addu $t0, $t0, $v0
    v1 = *(int32_t*)((t0) + 4);                                 // 0x00167924: lw $v1, 4($t0)
    if (v1 != 0) goto label_0x167940;                           // 0x00167928: bnez $v1, 0x167940
    a2 = 0xc;                                                   // 0x0016792c: addiu $a2, $zero, 0xc
    a1 = *(int32_t*)((t0) + 0x4c);                              // 0x00167930: lw $a1, 0x4c($t0)
    func_00177908();  // 0x1778a0                                // 0x00167934: jal 0x1778a0
label_0x167940:
    v1 = 1;                                                     // 0x00167940: addiu $v1, $zero, 1
    *(uint32_t*)((s0) + 0x44) = v1;                             // 0x00167948: sw $v1, 0x44($s0)
    return;                                                     // 0x00167954: jr $ra
    sp = sp + 0x10;                                             // 0x00167958: addiu $sp, $sp, 0x10
}