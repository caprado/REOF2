/** @category ps2-kernel-not-needed @status complete @author caprado */
void func_0011d5c8() {
    // MIPS register variables
    int32_t v0, v1, a0, a1, a2, a3, t0, t1, t2, t3, t4, t5, t6, t7, t8, t9;
    int32_t s0, s1, s2, s3, s4, s5, s6, s7;
    uintptr_t sp, gp, fp, ra;                                   // Pointer registers (as integers for arithmetic)
    int32_t at;                                                 // Assembler temporary register
    int32_t hi, lo;                                             // Multiply/divide result registers
    
    sp = sp + -0x10;                                            // 0x0011d5c8: addiu $sp, $sp, -0x10
    func_0011d390();  // 11d390                                // 0x0011d5d0: jal 0x11d390
    /* nop */                                                   // 0x0011d5d4: nop 
    SetSyscall();  // 0x11d4b8                                  // 0x0011d5d8: jal 0x11d4b8
    /* nop */                                                   // 0x0011d5dc: nop 
    func_0011daa8();  // 11daa8                                // 0x0011d5e0: jal 0x11daa8
    /* nop */                                                   // 0x0011d5e4: nop 
    func_0011dc20();  // 11dc20                                // 0x0011d5e8: jal 0x11dc20
    a0 = 2;                                                     // 0x0011d5ec: addiu $a0, $zero, 2
    func_0011de60();  // 11de60                                // 0x0011d5f0: jal 0x11de60
    /* nop */                                                   // 0x0011d5f4: nop 
    func_001150b8();  // 1150b8                                // 0x0011d5f8: jal 0x1150b8
    /* nop */                                                   // 0x0011d5fc: nop 
    func_0011d6f0();  // 11d6f0                                // 0x0011d600: jal 0x11d6f0
    /* nop */                                                   // 0x0011d604: nop 
    SetTLBEntry();  // 0x11cbc8                                 // 0x0011d608: jal 0x11cbc8
    /* nop */                                                   // 0x0011d60c: nop 
    return func_0011f2d8();  // Tail call                       // 0x0011d614: j 0x11f2d8
    sp = sp + 0x10;                                             // 0x0011d618: addiu $sp, $sp, 0x10
    /* nop */                                                   // 0x0011d61c: nop 
    v1 = 0x74;                                                  // 0x0011d620: addiu $v1, $zero, 0x74
    syscall();                                                  // 0x0011d624: syscall 
    return;                                                     // 0x0011d628: jr $ra
    /* nop */                                                   // 0x0011d62c: nop 
}