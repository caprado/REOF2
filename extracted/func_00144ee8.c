void func_00144ee8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v0 = 0x1000 << 16;                                          // 0x00144ee8: lui $v0, 0x1000
    a2 = (unsigned)a1 >> 0x1c;                                  // 0x00144eec: srl $a2, $a1, 0x1c
    v0 = v0 | 0x2000;                                           // 0x00144ef0: ori $v0, $v0, 0x2000
    v1 = 0x21 << 16;                                            // 0x00144ef4: lui $v1, 0x21
    g_10000000 = a1;  // Global at 0x10000000                   // 0x00144ef8: sw $a1, 0($v0)
    v1 = v1 + 0xcf8;                                            // 0x00144efc: addiu $v1, $v1, 0xcf8
    a2 = a2 << 2;                                               // 0x00144f00: sll $a2, $a2, 2
    a2 = a2 + v1;                                               // 0x00144f04: addu $a2, $a2, $v1
    v0 = *(int32_t*)(a2);                                       // 0x00144f08: lw $v0, 0($a2)
    return;                                                     // 0x00144f0c: jr $ra
    *(uint32_t*)((a0) + 0x830) = v0;                            // 0x00144f10: sw $v0, 0x830($a0)
}