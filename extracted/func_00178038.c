void func_00178038() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x00178038: addiu $sp, $sp, -0x10
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x00178048: lw $v0, 0x10($s0)
    if (v0 <= 0) goto label_0x178078;                           // 0x0017804c: blez $v0, 0x178078
    v1 = s0 + 0x18;                                             // 0x00178054: addiu $v1, $s0, 0x18
label_0x178058:
    v0 = *(int32_t*)(v1);                                       // 0x00178058: lw $v0, 0($v1)
    a0 = a0 + 1;                                                // 0x0017805c: addiu $a0, $a0, 1
    v0 = v0 - a1;                                               // 0x00178060: subu $v0, $v0, $a1
    *(uint32_t*)(v1) = v0;                                      // 0x00178064: sw $v0, 0($v1)
    v0 = *(int32_t*)((s0) + 0x10);                              // 0x00178068: lw $v0, 0x10($s0)
    v0 = (a0 < v0) ? 1 : 0;                                     // 0x0017806c: slt $v0, $a0, $v0
    if (v0 != 0) goto label_0x178058;                           // 0x00178070: bnez $v0, 0x178058
    v1 = v1 + 4;                                                // 0x00178074: addiu $v1, $v1, 4
label_0x178078:
    func_00178098();  // 178098                                // 0x00178078: jal 0x178098
    *(uint32_t*)((s0) + 0x1a8) = v0;                            // 0x00178080: sw $v0, 0x1a8($s0)
    return;                                                     // 0x0017808c: jr $ra
    sp = sp + 0x10;                                             // 0x00178090: addiu $sp, $sp, 0x10
}