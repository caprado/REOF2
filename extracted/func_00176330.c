void func_00176330() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    v1 = *(int32_t*)((a0) + 0x48);                              // 0x00176330: lw $v1, 0x48($a0)
    v0 = 4;                                                     // 0x00176334: addiu $v0, $zero, 4
    if (v1 == v0) return;  // Branch to 0x176378                // 0x00176338: beq $v1, $v0, 0x176378
    /* nop */                                                   // 0x0017633c: nop 
    v0 = -4;                                                    // 0x00176340: addiu $v0, $zero, -4
    if (v1 == v0) return;  // Branch to 0x176378                // 0x00176344: beq $v1, $v0, 0x176378
    /* nop */                                                   // 0x00176348: nop 
    v0 = 6;                                                     // 0x0017634c: addiu $v0, $zero, 6
    if (v1 == v0) return;  // Branch to 0x176378                // 0x00176350: beq $v1, $v0, 0x176378
    /* nop */                                                   // 0x00176354: nop 
    v0 = -6;                                                    // 0x00176358: addiu $v0, $zero, -6
    if (v1 == v0) return;  // Branch to 0x176378                // 0x0017635c: beq $v1, $v0, 0x176378
    v1 = -1;                                                    // 0x00176360: addiu $v1, $zero, -1
    a0 = 1;                                                     // 0x00176364: addiu $a0, $zero, 1
    *(uint32_t*)(a1) = v1;                                      // 0x00176368: sw $v1, 0($a1)
    return;                                                     // 0x00176370: jr $ra
    *(uint32_t*)(a2) = a0;                                      // 0x00176374: sw $a0, 0($a2)
}