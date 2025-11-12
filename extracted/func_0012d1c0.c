void func_0012d1c0() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x30;                                            // 0x0012d1c0: addiu $sp, $sp, -0x30
    s1 = *(int32_t*)((s2) + 4);                                 // 0x0012d1dc: lw $s1, 4($s2)
    func_00124c08();  // 0x124bb8                                // 0x0012d1e0: jal 0x124bb8
    func_00124f80();  // 0x124f78                                // 0x0012d1ec: jal 0x124f78
    func_00124f90();  // 0x124f80                                // 0x0012d1f8: jal 0x124f80
    a0 = *(int32_t*)((s2) + 0x34);                              // 0x0012d200: lw $a0, 0x34($s2)
    a2 = *(int32_t*)((s2) + 0x2c);                              // 0x0012d204: lw $a2, 0x2c($s2)
    s0 = s0 - a0;                                               // 0x0012d208: subu $s0, $s0, $a0
    a1 = *(int32_t*)((s2) + 0x30);                              // 0x0012d20c: lw $a1, 0x30($s2)
    v1 = (v0 < s0) ? 1 : 0;                                     // 0x0012d210: slt $v1, $v0, $s0
    if (v1 != 0) s0 = v0;                                       // 0x0012d218: movn $s0, $v0, $v1
    a1 = a1 + s3;                                               // 0x0012d21c: addu $a1, $a1, $s3
    a0 = a0 + s0;                                               // 0x0012d220: addu $a0, $a0, $s0
    a2 = a2 + s0;                                               // 0x0012d224: addu $a2, $a2, $s0
    *(uint32_t*)((s2) + 0x34) = a0;                             // 0x0012d228: sw $a0, 0x34($s2)
    *(uint32_t*)((s2) + 0x2c) = a2;                             // 0x0012d22c: sw $a2, 0x2c($s2)
    *(uint32_t*)((s2) + 0x30) = a1;                             // 0x0012d230: sw $a1, 0x30($s2)
    return;                                                     // 0x0012d244: jr $ra
    sp = sp + 0x30;                                             // 0x0012d248: addiu $sp, $sp, 0x30
}