void func_00180140() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x20;                                            // 0x00180140: addiu $sp, $sp, -0x20
    func_00188bf8();  // 188bf8                                // 0x0018014c: jal 0x188bf8
    if (v0 < 0) goto label_0x180184;                            // 0x00180154: bltz $v0, 0x180184
    a0 = 0x334;                                                 // 0x00180158: addiu $a0, $zero, 0x334
    v1 = 0x26 << 16;                                            // 0x0018015c: lui $v1, 0x26
    v1 = v1 + 0x7908;                                           // 0x00180164: addiu $v1, $v1, 0x7908
    v0 = 1;                                                     // 0x00180168: addiu $v0, $zero, 1
    a1 = a0 + v1;                                               // 0x0018016c: addu $a1, $a0, $v1
    a2 = v1 + a0;                                               // 0x00180170: addu $a2, $v1, $a0
    *(uint32_t*)(a1) = 0;                                       // 0x00180174: sw $zero, 0($a1)
    *(uint32_t*)((a2) + 4) = 0;                                 // 0x0018017c: sw $zero, 4($a2)
    g_00267914 = 0;  // Global at 0x00267914                    // 0x00180180: sw $zero, 0xc($v1)
label_0x180184:
    return;                                                     // 0x0018018c: jr $ra
    sp = sp + 0x20;                                             // 0x00180190: addiu $sp, $sp, 0x20
}